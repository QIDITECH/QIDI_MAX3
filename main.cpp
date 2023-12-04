#include <fstream>

#include <wpa_ctrl.h>

#include "include/MakerbaseClient.h"
#include "include/MoonrakerAPI.h"
#include "include/MakerbaseIPC.h"
#include "include/MakerbaseSerial.h"
#include "include/MakerbaseParseMessage.h"
#include "include/MakerbasePanel.h"
#include "include/MakerbaseParseIni.h"
#include "include/MakerbaseWiFi.h"
#include "include/MakerbaseNetwork.h"

#include "include/KlippyGcodes.h"

#include "include/mks_log.h"
#include "include/mks_preview.h"
#include "include/mks_init.h"
#include "include/mks_gpio.h"
#include "include/mks_update.h"
#include "include/mks_wpa_cli.h"
#include "include/mks_test.h"

// #include <gtk/gtk.h>

#include "include/ui.h"
#include "include/send_msg.h"
// #include "include/receive_msg.h"
// #include "include/printer.h"
// #include "include/systeminfo.h"
#include "include/KlippyRest.h"
#include "include/event.h"

extern int tty_fd;
extern int current_page_id;
extern int previous_page_id;

MakerbaseClient *ep;

extern std::string serial_by_id;
extern std::string str_gimage;

bool is_download_to_screen = false;

bool find_screen_tft_file = false;

// extern struct wpa_ctrl *mon_conn;

int main(int argc, char** argv) {


	DIR *dir;
	struct dirent *entry;

	dir = opendir("/dev");

	if (dir == NULL) {
		perror("无法打开目录 /dev");
	}

	while ((entry = readdir(dir))) {
		if (strstr(entry->d_name, "/dev/sd") == entry->d_name) {
			if (strlen(entry->d_name) >= 8) {
				char *partition_suffix = entry->d_name + 7;
				if (partition_suffix[1] == '1') {
					char command[256];
                    snprintf(command, sizeof(command), "/usr/bin/systemctl --no-block restart makerbase-automount@%s.service", partition_suffix);
					system(command);
				}
			}
		}
	}

	// getIPAddress();
	/*
	if (access("/dev/sda", F_OK) == 0) {
		if (access("/dev/sda1", F_OK) == 0) {
			if (access("/home/mks/gcode_files/sda1", F_OK) != 0) {
				system("/usr/bin/systemctl --no-block restart makerbase-automount@sda1.service");
			}
		}
    }
	*/

    if (access("/home/mks/gcode_files/sda1/mksscreen.recovery", F_OK) == 0) {
        system("cp /home/mks/gcode_files/sda1/mksscreen.recovery /root/800_480.tft; sync");
    }

    if (access("/home/mks/gcode_files/sda1/mksclient.recovery", F_OK) == 0) {
        system("dpkg -i /home/mks/gcode_files/sda1/mksclient.recovery; sync");
    }

	if (access("/root/800_480.tft", F_OK) == 0) {
		find_screen_tft_file = true;
		MKSLOG_BLUE("找到tft升级文件");
	} else {
		find_screen_tft_file = false;
		MKSLOG_BLUE("没有找到tft升级文件");
	}
	/*
	if (set_GPIO1_C5_high() == 0) {
		MKSLOG("GPIO1_C5拉高成功");
	} else {
		MKSLOG("GPIO1_C5拉高失败");
	}

	if (init_GPIO1_B2() == 0) {
		MKSLOG("初始化GPIO1_B2成功");
	} else {
		MKSLOG("初始化GPIO1_B2失败");
	}

	if (init_GPIO1_C3() == 0) {
		MKSLOG("GPIO1_C3初始化成功");
	} else {
		MKSLOG("GPIO1_C3初始化失败");
	}
	*/
	if (find_screen_tft_file == true) {
		system("/root/uart; mv /root/800_480.tft /root/800_480.tft.bak");
		// system("mv /root/800_480.tft /root/800_480.tft.bak");
		find_screen_tft_file = false;
	}

	// pthread_t monitor_thread;
	// pthread_t monitor_C3_thread;
	pthread_t wpa_recv_thread;

	// pthread_t test_thread;

	// pthread_create(&monitor_thread, NULL, monitor_GPIO1_B2, NULL);
	// pthread_create(&monitor_C3_thread, NULL, monitor_GPIO1_C3, NULL);
	pthread_create(&wpa_recv_thread, NULL, mks_wifi_hdlevent_thread, NULL);

	// mks_wifi_scan_scan_result();
	
	// std::string file = "/root/testpreview.txt";
	// std::ifstream preview(file.c_str());
	// getline(preview, str_gimage);
	// std::cout << str_gimage << std::endl;
	// preview.close();

	// std::cout << rescan() << std::endl;
	// scan_results();
	// std::string filename = "/root/1111111.gcode";
	// generate_gimage(filename);
	// read_cfg_mcu_serial();


	/* 功能测试成功，以下代码注释掉 */
	/* 以下为测试 ini 文件的功能, start */
	// mksini_load();
	// std::cout << mksini_getstring("mcu MKS_THR", "serial", "NO") << std::endl;
	// mksini_set("target", "extruder", "50");
	// mksini_save();				// 保存的效果可以实现
	// mksini_free();
	/* 以下为测试 ini 文件的功能, end */

	bool done = false;

	// test post
	// std::string test = send_request("192.168.2.180", "7125", "printer/print/cancel", "POST");
	// std::cout << test << std::endl;
	// std::string test2 = send_request("192.168.2.180", "7125", "server/files/gcodes/xuda.gcode", "DELETE");
	// std::cout << test2 << std::endl;
	// test post

	pthread_t tid_msg_parse;
	std::string host = "localhost";
	std::string url = "ws://localhost:7125/websocket?";
	MKSLOG("%s", url.data());
	MKSLOG_RED("TEST");

	if (argc == 2) {
		host = argv[1];
		url = "ws://" + host + ":7125/websocket?";
	}

	// mks_set_psk("makerbase318");

	ep = new MakerbaseClient(host, "7125");
	std::cout << ep->GetURL() << std::endl;
	std::cout << ep->GetStatus() << std::endl;
	std::cout << ep->GetIsConnected() << std::endl;

	int fd;			// 串口文件描述符
	char buff[4096];
	int count;

	bool start_connect = false;

	// ep->Connect(url);
	/*
	while (!ep->GetIsConnected()) {
		std::cout << "状态未连接: " << ep->GetIsConnected() << std::endl;
		usleep(30000);
		if (start_connect == false) {
			ep->Connect(url);
			start_connect = true;
		}
		usleep(30000);
		if (ep->GetStatus() != "Open") {
			start_connect = false;
		}
	}
	*/
	int connected_count = 0;
	
	while (!ep->GetIsConnected()) {
		std::cout << connected_count << "状态未连接: " << ep->GetIsConnected() << std::endl;
		ep->Close();
		ep->Connect(url);
		connected_count++;
		sleep(1);
		ep->GetStatus();
		sleep(1);
	}
	

	// 新版连接方法如下：
	
	/*
	while (!ep->GetIsConnected()) {
		ep->Connect(url);
		while (!ep->GetIsConnected()) {
			ep->GetStatus();
			std::cout << "正在获取连接状态，未连接成功" << std::endl;
		}
		break;
	}
	*/
	
	
	pthread_create(&tid_msg_parse, NULL, json_parse, NULL);
	// pthread_create(&test_thread, NULL, mks_test, NULL);

	if ((fd = open("/dev/ttyS1", O_RDWR | O_NDELAY | O_NOCTTY)) < 0) {
	// if ((fd = open("/dev/ttyS1", O_RDWR | O_NOCTTY)) < 0) {
		printf("Open tty failed\n");
	} else {
		MKSLOG_BLUE("%d", tty_fd);
		tty_fd = fd;
		printf("Open tty success\n");
		set_option(fd, 115200, 8, 'N', 1);
		try
		{
			fcntl(fd, F_SETFL, FNDELAY);
			if (find_screen_tft_file == false) {
				// send_cmd_page(fd, "main");
				previous_page_id = TJC_PAGE_LOGO;
				if (get_mks_oobe_enabled() == true) {
					current_page_id = TJC_PAGE_OPEN_LANGUAGE;
				} else {
					current_page_id = TJC_PAGE_MAIN;
				}
				
				page_to(current_page_id);

                //4.2.1 CLL 修复开机读取不到参数
				get_total_time();
				sleep(2);
				sub_object_status();									// 订阅相关的参数

				sleep(2);

				get_object_status();									// 主动获取必备的参数
				sleep(2);
				init_mks_status();
				mks_get_version();
				// page_to(TJC_PAGE_MKS_TEST);
				// current_page_id = TJC_PAGE_MKS_TEST;
			} 
			/*
			else {
				// send_cmd_page(fd, "update_screen");
				init_download_to_screen();
				previous_page_id = TJC_PAGE_LOGO;
				current_page_id = TJC_PAGE_UPDATE_SCREEN;
				// current_page_id = -1;
				page_to(current_page_id);
				
			}
			*/
		}
		catch(const std::exception& e)
		{
			std::cerr << "Page main error, " << e.what() << '\n';
		}
	}

	/*
	if (get_mks_led_status() == 0) {
		MKSLOG_BLUE("关掉LED灯");
		ep->Send(json_run_a_gcode("SET_PIN PIN=caselight VALUE=0"));
	} else {
		MKSLOG_BLUE("打开LED灯");
		ep->Send(json_run_a_gcode("SET_PIN PIN=caselight VALUE=1"));
	}
	*/

	while(1) {
		// system("sync");
		// if (is_download_to_screen == false) {
		if ((count = read(fd, buff, sizeof(buff))) > 0) {
			char *cmd = buff;
			parse_cmd_msg_from_tjc_screen(cmd);
			memset(buff, 0, sizeof(buff));
		}
		// }
		usleep(5000);
	}
	close(fd);
	return 0;
}
