/*
***************************************************************************
*
* Author: Teunis van Beelen
*
* Copyright (C) 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017 Teunis van Beelen
*
* Email: teuniz@gmail.com
*
***************************************************************************
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
***************************************************************************
*/


/* Last revision: November 22, 2017 */

/* For more info and how to use this library, visit: http://www.teuniz.net/RS-232/ */


#include "rs232.h"
#include <string.h>
#include <stdio.h>

#define DEF_BAUD	115200
#define SPEED_CNT	5

#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__)  /* Linux & FreeBSD */

    int tty_fd;
    struct termios old_termios;
    struct termios new_termios;
    

/**
*@brief   设置串口数据位，停止位和效验位
*@param  fd     类型  int  打开的串口文件句柄*
*@param  databits 类型  int 数据位   取值 为 7 或者8*
*@param  stopbits 类型  int 停止位   取值为 1 或者2*
*@param  parity  类型  int  效验类型 取值为N,E,O,,S
*@return  0 success or -1 err
*/
int set_parity(int fd, int databits, int stopbits, int parity)
{

	struct termios options;
	if (tcgetattr(fd, &options) != 0)
	{
		perror("tcgetattr");
		return -1;
	}

	options.c_cflag &= ~CSIZE;
	switch (databits) /*设置数据位数*/
	{
		case 7:
			options.c_cflag |= CS7;
			break;
		case 8:
			options.c_cflag |= CS8;
			break;
		default:
			fprintf(stderr, "Unsupported data size\n");

			return -1;
	}
	
	switch (parity)
  	{
		case 'n':
		case 'N':
			options.c_cflag &= ~PARENB;   /* Clear parity enable */
			options.c_iflag &= ~INPCK;     /* Enable parity checking */
			options.c_iflag &= ~(ICRNL|IGNCR);
			options.c_lflag &= ~(ICANON );
			break;
		case 'o':
		case 'O':
			options.c_cflag |= (PARODD | PARENB);  /* 设置为奇效验*/ 
			options.c_iflag |= INPCK;             /* Disnable parity checking */
			break;
		case 'e':
		case 'E':
			options.c_cflag |= PARENB;     /* Enable parity */
			options.c_cflag &= ~PARODD;   /* 转换为偶效验*/  
			options.c_iflag |= INPCK;       /* Disnable parity checking */
			break;
		case 'S':
		case 's':  /*as no parity*/
			options.c_cflag &= ~PARENB;
			options.c_cflag &= ~CSTOPB;
			break;
		default:
			fprintf(stderr, "Unsupported parity\n");
			return -1;
	}

	/* 设置停止位*/   
	switch (stopbits)
  	{
		case 1:
			options.c_cflag &= ~CSTOPB;
			break;
		case 2:
			options.c_cflag |= CSTOPB;
			break;
		default:
			fprintf(stderr,"Unsupported stop bits\n");
			return -1;
	}

	/* Set input parity option */
	if ((parity != 'n') || (parity != 'N'))
  		options.c_iflag |= INPCK;

	/* 若以O_NONBLOCK 方式open，这两个设置没有作用，等同于都为0 */
	/* 若非O_NONBLOCK 方式open，具体作用可参考其他博客，关键词linux VTIME */
    options.c_cc[VTIME] = 10; // 1s
    options.c_cc[VMIN] = 0; 

	/* 清空正读的数据，且不会读出 */
	tcflush(fd,TCIFLUSH); 
	
	/*采用原始模式通讯*/
	options.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
	options.c_oflag &= ~OPOST;
	
	/*解决发送0x0A的问题*/
	// options.c_iflag &= ~(INLCR | ICRNL | IGNCR);
	// options.c_oflag &= ~(ONLCR | OCRNL | ONOCR | ONLRET);

	/* Update the options and do it NOW */
	if (tcsetattr(fd, TCSANOW, &options) != 0)
  	{
  		perror("SetupSerial 3");
		return -1;
	}

	return 0;
}

int speed_arr[SPEED_CNT] = {
	B9600, B19200, B38400, 
	B57600,	B115200
};

int name_arr[SPEED_CNT] = {
	9600, 19200, 38400,
	57600, 115200
};

/**
*@brief  设置串口通信速率
*@param  fd     类型 int  打开串口的文件句柄
*@param  speed  类型 int  串口速度
*@return  0 success or -1 err
*/
int set_speed(int fd, int speed)
{
	int i;
	int status;
	struct termios opt;
	
	tcgetattr(fd, &opt);

	for (i= 0; i<SPEED_CNT; i++)
	{
		if (speed == name_arr[i])
		{
			tcflush(fd, TCIOFLUSH);
			/*  设置串口的波特率 */
			cfsetispeed(&opt, speed_arr[i]);
			cfsetospeed(&opt, speed_arr[i]);
			status = tcsetattr(fd, TCSANOW, &opt);

			if (status != 0)
			{
				perror("tcsetattr set_speed");
				return -1;
			}
			
			return 0;
     	}
		/*清空所有正在发生的IO数据*/
		tcflush(fd, TCIOFLUSH);
   }
   
	printf("Cannot find suitable speed\n");
	return -1;
}


 int RS232_OpenComport(char *comport) {

    char str[64]= "/dev/";
    strcat(str, comport);
    
    //tty_fd = open(str, O_RDWR | O_NOCTTY);
	tty_fd = open(str, O_RDWR | O_NOCTTY | O_NDELAY);
    if (tty_fd < 0) {
        fprintf(stderr, "error, counldn't open [%s]\n", str);
        return 1;
    }
    if (tcgetattr(tty_fd, &old_termios) != 0) {
        fprintf(stderr, "tcgetattr(fd, &old_termios) failed: %s\n", strerror(errno));
        return 1;
    }
	
	if (-1 == set_speed(tty_fd, DEF_BAUD)) {
		printf("Cannot set baudrate to 115200\n");
		close(tty_fd);
		exit(1);
	}
	
  	if (-1 == set_parity(tty_fd, 8, 1, 'N')) {
    	printf("Set Parity Error\n");
		close(tty_fd);
    	exit(1);
  	}
	#if 0
    memset(&new_termios, 0, sizeof(new_termios));
    new_termios.c_iflag = IGNPAR;
    new_termios.c_oflag = 0;
    new_termios.c_cflag = CS8 | CREAD | CLOCAL | HUPCL;
    new_termios.c_lflag = 0;
    new_termios.c_cc[VINTR]    = 0;
    new_termios.c_cc[VQUIT]    = 0;
    new_termios.c_cc[VERASE]   = 0;
    new_termios.c_cc[VKILL]    = 0;
    new_termios.c_cc[VEOF]     = 4;
    new_termios.c_cc[VTIME]    = 0;
    new_termios.c_cc[VMIN]     = 1;
    //new_termios.c_cc[VSWTC]    = 0;
    new_termios.c_cc[VSTART]   = 0;
    new_termios.c_cc[VSTOP]    = 0;
    new_termios.c_cc[VSUSP]    = 0;
    new_termios.c_cc[VEOL]     = 0;
    new_termios.c_cc[VREPRINT] = 0;
    new_termios.c_cc[VDISCARD] = 0;
    new_termios.c_cc[VWERASE]  = 0;
    new_termios.c_cc[VLNEXT]   = 0;
    new_termios.c_cc[VEOL2]    = 0;


    if (cfsetispeed(&new_termios, B9600) != 0) {
        fprintf(stderr, "cfsetispeed(&new_termios, B9600) failed: %s\n", strerror(errno));
        return 1;
    }
    if (cfsetospeed(&new_termios, B9600) != 0) {
        fprintf(stderr, "cfsetospeed(&new_termios, B9600) failed: %s\n", strerror(errno));
        return 1;
    }

    if (tcsetattr(tty_fd, TCSANOW, &new_termios) != 0) {
        fprintf(stderr, "tcsetattr(fd, TCSANOW, &new_termios) failed: %s\n", strerror(errno));
        return 1;
    }
	#endif

    return 0;
//======================================================================================
 }


 int RS232_SendByte(unsigned char byte) {
   int n = write(tty_fd, &byte, 1);
   if(n < 0) {
     if(errno == EAGAIN) {
       return 0;
     } else {
       return 1;
     }
   }


   return(0);
  }
  
  int RS232_SendNBytes(unsigned char *buf, unsigned int num) {
   int n = write(tty_fd, buf, num);
   static int debugtime = 0;
   if(debugtime < 3)
   {
	   printf("Send %d num, actual send %d:\n", num, n);
	   for(int i = 0; i <  num; i++)
			printf("0x%x ", buf[i]);
		debugtime++;
   }
   if(n < num) {
     if(errno == EAGAIN) {
       return 0;
     } else {
       return n;
     }
   }


   return(n);
  }
  
  int RS232_Receive(unsigned char *buf, unsigned int num) {
	int n = read(tty_fd, buf, num);
	return n;
	
  }

/*
  int RS232_ReadByte() {
    unsigned char c;
    if (read(tty_fd,&c,1)>0) {
        return c;
    }
    
    return -1;
  }
*/

 void RS232_CloseComport() {

   tcsetattr(tty_fd, TCSANOW, &old_termios);
   close(tty_fd);

 }


 void RS232_enableDTR() {
   int status;

   if(ioctl(tty_fd, TIOCMGET, &status) == -1) {
     perror("unable to get portstatus");
   }

   status |= TIOCM_DTR;    /* turn on DTR */

   if(ioctl(tty_fd, TIOCMSET, &status) == -1) {
     perror("unable to set portstatus");
   }
 }


 void RS232_disableDTR()
 {
   int status;

   if(ioctl(tty_fd, TIOCMGET, &status) == -1) {
     perror("unable to get portstatus");
   }

   status &= ~TIOCM_DTR;    /* turn off DTR */

   if(ioctl(tty_fd, TIOCMSET, &status) == -1) {
     perror("unable to set portstatus");
   }
 }


 void RS232_enableRTS()
 {
   int status;

   if(ioctl(tty_fd, TIOCMGET, &status) == -1) {
     perror("unable to get portstatus");
   }

   status |= TIOCM_RTS;    /* turn on RTS */

   if(ioctl(tty_fd, TIOCMSET, &status) == -1) {
     perror("unable to set portstatus");
   }
 }


 void RS232_disableRTS() {
   int status;

   if(ioctl(tty_fd, TIOCMGET, &status) == -1) {
     perror("unable to get portstatus");
   }

   status &= ~TIOCM_RTS;    /* turn off RTS */

   if(ioctl(tty_fd, TIOCMSET, &status) == -1) {
     perror("unable to set portstatus");
   }
 }

 void RS232_send_magic(){
   write(tty_fd,"1EAF",4);
 }


#else  /* windows */

HANDLE Cport;

char mode_str_2[] = "baud=9600 data=8 parity=n stop=1 dtr=off rts=off";

int RS232_OpenComport(char *comport)
{
	
	//printf("%s\n %s\n %s\n %p\n", mode_str_2, comports[comport_number], comport, Cport);
    
	char str[32] = "\\\\.\\";
	strcat(str, comport);
	//printf("%s\n", str);
	
  Cport = CreateFileA(str,
                      GENERIC_READ|GENERIC_WRITE,
                      0,                          /* no share  */
                      NULL,                       /* no security */
                      OPEN_EXISTING,
                      0,                          /* no threads */
                      NULL);                      /* no templates */

  if(Cport==INVALID_HANDLE_VALUE)
  {
    //printf("> unable to open comport\n");
    return(1);
  }

  DCB port_settings;
  memset(&port_settings, 0, sizeof(port_settings));  /* clear the new struct  */
  port_settings.DCBlength = sizeof(port_settings);

  if(!BuildCommDCBA(mode_str_2, &port_settings))
  {
    printf("> unable to set comport dcb settings\n");
    CloseHandle(Cport);
    return(1);
  }

  if(!SetCommState(Cport, &port_settings))
  {
    printf("> unable to set comport cfg settings\n");
    CloseHandle(Cport);
    return(1);
  }

  COMMTIMEOUTS Cptimeouts;

  Cptimeouts.ReadIntervalTimeout         = MAXDWORD;
  Cptimeouts.ReadTotalTimeoutMultiplier  = 0;
  Cptimeouts.ReadTotalTimeoutConstant    = 0;
  Cptimeouts.WriteTotalTimeoutMultiplier = 0;
  Cptimeouts.WriteTotalTimeoutConstant   = 0;

  if(!SetCommTimeouts(Cport, &Cptimeouts))
  {
    printf("> unable to set comport time-out settings\n");
    CloseHandle(Cport);
    return(1);
  }

  return(0);
}


int RS232_SendByte(unsigned char byte)
{
  int n;

  WriteFile(Cport, &byte, 1, (LPDWORD)((void *)&n), NULL);

  if(n<0)  return(1);

  return(0);
}

void RS232_CloseComport()
{
  CloseHandle(Cport);
}

void RS232_enableDTR()
{
  EscapeCommFunction(Cport, SETDTR);
}


void RS232_disableDTR()
{
  EscapeCommFunction(Cport, CLRDTR);
}


void RS232_enableRTS()
{
  EscapeCommFunction(Cport, SETRTS);
}


void RS232_disableRTS()
{
  EscapeCommFunction(Cport, CLRRTS);
}

void RS232_send_magic()
{
  int n;

  WriteFile(Cport, "1EAF", 4, (LPDWORD)((void *)&n), NULL);
}

#endif

