/*
* STM32 HID Bootloader - USB HID bootloader for STM32F10X
* Copyright (c) 2018 Bruno Freitas - bruno@brunofreitas.com
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
* Modified 20 April 2018
*	by Vassilis Serasidis <avrsite@yahoo.gr>
*	This HID bootloader work with bluepill + STM32duino + Arduino IDE <http://www.stm32duino.com/>
*
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include "rs232.h"
#include "hidapi.h"

#define SECTOR_SIZE  1024
#define HID_TX_SIZE    64
#define HID_RX_SIZE     100

#define VID           0x1209
#define PID           0xBEBA
#define FIRMWARE_VER  0x0300

int serial_init(char *argument, uint8_t __timer);

/*
static int usb_write(hid_device *device, uint8_t *buffer, int len) {
  int retries = 20;
  int retval;

  while(((retval = hid_write(device, buffer, len)) < len) && --retries) {
    if(retval < 0) {
      usleep(100 * 1000); // No data has been sent here. Delay and retry.
    } else {
      return 0; // Partial data has been sent. Firmware will be corrupted. Abort process.
    }
  }

  if(retries <= 0) {
    return 0;
  }

  return 1;
}*/

int main(int argc, char *argv[]) {
  uint8_t page_data[SECTOR_SIZE];
  uint8_t hid_tx_buf[HID_TX_SIZE];
  uint8_t hid_rx_buf[HID_RX_SIZE];
  uint8_t CMD_RESET_PAGES[8] = {'B','L','T','T','T','T','T', 'T'};
  uint8_t CMD_REBOOT_MCU[8] = {'B','T','L','D','C','M','D', 0x01};
  hid_device *handle = NULL;
  size_t read_bytes;
  FILE *firmware_file = NULL;
  int error = 0;
  uint32_t n_bytes = 0;
  int i;
  setbuf(stdout, NULL);
  uint8_t _timer = 0;
  uint8_t try_ask_time = 0;
  int wait_ok_time = 0;
  
  printf("\n+-----------------------------------------------------------------------+\n");
  printf  ("|         HID-Flash v2.2.1 - STM32 HID Bootloader Flash Tool            |\n");
  printf  ("|     (c)      2018 - Bruno Freitas       http://www.brunofreitas.com   |\n");
  printf  ("|     (c) 2018-2019 - Vassilis Serasidis  https://www.serasidis.gr      |\n");
  printf  ("|   Customized for STM32duino ecosystem   https://www.stm32duino.com    |\n");
  printf  ("+-----------------------------------------------------------------------+\n\n");
  
  if(argc < 3) {
    printf("Usage: hid-flash <bin_firmware_file> <comport> <delay (optional)>\nFor example:\n./hid-flash /home/mks/klipper/out/klipper.bin ttyS0\n");
    return 1;
  }else if(argc == 4){
    _timer = atol(argv[3]);
  }
  
  firmware_file = fopen(argv[1], "rb");
  if(!firmware_file) {
    printf("> Error opening firmware file: %s\n", argv[1]);
    return error;
  }
  
  if(serial_init(argv[2], _timer) == 0){ //Setting up Serial port
    //RS232_CloseComport();
	printf("> Open the [%s] successfully\n",argv[2]);
  }else{
    printf("> Unable to open the [%s]\n",argv[2]);
  }
  
  // Send RESET PAGES command to put HID bootloader in initial stage...
  memset(hid_tx_buf, 0, sizeof(hid_tx_buf)); //Fill the hid_tx_buf with zeros.
  memcpy(&hid_tx_buf[0], CMD_RESET_PAGES, sizeof(CMD_RESET_PAGES));

  printf("> Sending <reset pages> command...\n");

  // Flash is unavailable when writing to it, so USB interrupt may fail here
 // if(!usb_write(handle, hid_tx_buf, HID_TX_SIZE)) {
	 int tx_num = RS232_SendNBytes(hid_tx_buf, HID_TX_SIZE);
  if(tx_num < HID_TX_SIZE) {
    printf("> Error while sending %d <reset pages> command.\n", tx_num);
    error = 1;
    goto exit;
  }
  

	for(wait_ok_time = 0; wait_ok_time < 2; wait_ok_time++)
	{
		do{
			memset(hid_rx_buf, 0, sizeof(hid_rx_buf));
			//hid_read(handle, hid_rx_buf, 9);
			usleep(2000);
			int rcv_num = RS232_Receive(hid_rx_buf, 2);
			
			if(rcv_num > 0)
				printf("rcv %d data:%s\n", rcv_num, (char *)&hid_rx_buf[0]);
			
			if((hid_rx_buf[0] != 'O') || (hid_rx_buf[1] != 'K'))
			{
				usleep(3000000);
				try_ask_time++;
				if(try_ask_time > 9)
				{
					printf("> Error, no ok receive, timeout and exit!!!\n");
					goto exit;
				}
				if(wait_ok_time == 0)
					if(RS232_SendNBytes(hid_tx_buf, HID_TX_SIZE) < HID_TX_SIZE) {
						printf("> Error while sending <reset pages> command.\n");
						error = 1;
						goto exit;
					 }
			
			}		
			
		}while((hid_rx_buf[0] != 'O') || hid_rx_buf[1] != 'K');
	}	
		

	memset(hid_tx_buf, 0, sizeof(hid_tx_buf));

	// Send Firmware File data
	printf("> Flashing firmware...\n");

	memset(page_data, 0, sizeof(page_data));
	read_bytes = fread(page_data, 1, sizeof(page_data), firmware_file);

	static  int debugtime = 0;
	while(read_bytes > 0) {	 
	  
		if(RS232_SendNBytes(page_data, sizeof(page_data)) < sizeof(page_data)) {
			printf("> Error while flashing firmware data.\n");
			error = 1;
			goto exit;
		}
		n_bytes += sizeof(page_data) ;
		
		
    
		printf(" %d Bytes\n", n_bytes);

   /* do{
      //hid_read(handle, hid_rx_buf, 9);
	  RS232_Receive(hid_rx_buf, 9);
      usleep(500);
    }while(hid_rx_buf[7] != 0x02);*/
	
	try_ask_time = 0;
	do{
		memset(hid_rx_buf, 0, sizeof(hid_rx_buf));
		//hid_read(handle, hid_rx_buf, 9);
		int rcv_num = RS232_Receive(hid_rx_buf, 50);
		if(rcv_num > 0)
			printf("rcv %d data:%s\n", rcv_num, (char *)&hid_rx_buf[0]);
		if(hid_rx_buf[7] != 0x02)
		{
			usleep(100);
			try_ask_time++;
			if(try_ask_time > 10000)
			{
				printf("> Error, no frame ack receive, timeout and exit!!!\n");
				goto exit;
			}
			
		}
	 }while(hid_rx_buf[7] != 0x02);
	
    
    memset(page_data, 0xff, sizeof(page_data));
    read_bytes = fread(page_data, 1, sizeof(page_data), firmware_file);
	
  }

  printf("\n> Done!\n");
  
  // Send CMD_REBOOT_MCU command to reboot the microcontroller...
  memset(page_data, 0, sizeof(page_data));
  memcpy(&page_data[0], CMD_REBOOT_MCU, sizeof(CMD_REBOOT_MCU));

  printf("> Sending <reboot mcu> command...\n");

  // Flash is unavailable when writing to it, so USB interrupt may fail here
  //if(!usb_write(handle, hid_tx_buf, HID_TX_SIZE)) {
  if(RS232_SendNBytes(page_data, sizeof(page_data)) < sizeof(page_data)) {
    printf("> Error while sending <reboot mcu> command.\n");
  }
  
  
exit:
  /*if(handle) {
    hid_close(handle);
  }

  hid_exit();*/

  if(firmware_file) {
    fclose(firmware_file);
  }
  
/*  printf("> Searching for [%s] ...\n",argv[2]);

  for(int i=0;i<5;i++){
    if(RS232_OpenComport(argv[2]) == 0){
      printf("> [%s] is found !\n",argv[2] );
      break;
    }
    sleep(1);
  }
  
  if(i==5){
    printf("> Comport is not found\n");
  }*/
  RS232_CloseComport();
  
  printf("> Finish\n");
  
  return error;
}

int serial_init(char *argument, uint8_t __timer) {

  printf("> Trying to open the [%s]...\n",argument);
  if(RS232_OpenComport(argument)){
    return(1);
  }
  #if 0
  printf("> Toggling DTR...\n");
  
  RS232_disableRTS();
  RS232_enableDTR();
  usleep(200000L);
  RS232_disableDTR();
  usleep(200000L);
  RS232_enableDTR();
  usleep(200000L);
  RS232_disableDTR();
  usleep(200000L);
  RS232_send_magic();
  usleep(200000L);
  RS232_CloseComport();
  
  
  //printf("A %i\n",__timer);
  if (__timer > 0) {
    usleep(__timer);
  }
  #endif
  return 0;
}
