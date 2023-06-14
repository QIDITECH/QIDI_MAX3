#ifndef EVENT_H
#define EVENT_H

void refresh_page_show();
void refresh_page_internet();
void refresh_page_open_leveling();
void refresh_page_open_levelinit();
void refresh_page_open_syntony();
void refresh_page_open_leveled();
void refresh_page_wifi_keyboard();
void refresh_page_level_print();
void refresh_page_update_screen();
void refresh_page_wifi_connect();
void refresh_page_pid_working();
void refresh_page_pid_finish();
void refresh_page_saving();
void refresh_page_wifi_list_2();
void refresh_page_syntony_finish();
void refresh_page_mks_test();
void refresh_page_no_updata();
void refresh_page_about();
void refresh_page_auto_level();
void refresh_page_stopping();
void refresh_page_set_zoffset_2();
void refresh_page_manual_move_2();
void refresh_page_set_zoffset();
void refresh_page_systony_move();
void refresh_page_manual_level();
void refresh_page_print_filament();
void refresh_page_auto_finish();
void refresh_page_manual_finish();
void refresh_page_auto_move();
void refresh_page_manual_move();
void refresh_page_leveling_init();
void refresh_page_move();
void refresh_page_filament();
void refresh_page_print_finish();
void refresh_page_offset(float intern_zoffset);
void refresh_page_printing_zoffset();
void refresh_page_printing();
void clear_page_printing_arg();
void refresh_page_preview();
void refresh_page_main();
void refresh_page_files_list_1();
void refresh_page_files_list_2();
void refresh_page_files(int pages);
void sub_object_status();
void get_object_status();
void get_file_estimated_time(std::string filename);
void delete_file(std::string filepath);
void start_printing(std::string filepath);
void set_target(std::string heater, int target);
void set_extruder_target(int target);
void set_heater_bed_target(int target);
void set_hot_target(int target);
void set_fan(int speed);
void set_fan0(int speed);
void set_fan2(int speed);
//3.1.3 新增fan3
void set_fan3(int speed);
void set_target(std::string heater, int target);
void set_intern_zoffset(float offset);
void set_zoffset(bool positive);
void set_move_dist(float dist);
void set_printer_speed(int speed);
void set_printer_flow(int rate);
std::string show_time(int seconds);
void move_home();
void move_x_decrease();
void move_x_increase();
void move_y_decrease();
void move_y_increase();
void move_z_decrease();
void move_z_increase();
bool get_filament_detected();
bool get_filament_detected_enable();
bool get_print_pause_resume();
void set_print_pause_resume();
void set_print_pause();
void set_print_resume();
void cancel_print();
void sdcard_reset_file();
void set_auto_level_dist(float dist);
void pre_auto_level_init();
void start_auto_level();
void start_manual_level();
void finish_auto_level();
void finish_manual_level();
void pre_manual_level_init();
void pre_set_zoffset_init();
void start_auto_level_dist(bool positive);
void start_manual_level_dist(bool positive);
void set_manual_level_dist(float dist);
void set_filament_extruder_target(bool positive);
void set_print_filament_dist(int dist);
void start_retract();
void start_extrude();
std::string get_ip(std::string net);
void move_home_tips();
void filament_tips();
void move_tips();
void reset_klipper();
void reset_firmware();
void finish_print();
void set_filament_sensor();
void motors_off();
// void filament_unload();
void beep_on_off();
void led_on_off();
// void reset_meta_data();
void move_to_certain_position(int i);
void shutdown_mcu();
void firmware_reset();
void go_to_page_power_off();
int get_mks_led_status();
void set_mks_led_status();
int get_mks_beep_status();
void set_mks_beep_status();
void get_mks_language_status();
void set_mks_language_status();
void get_mks_extruder_target();
void set_mks_extruder_target(int target);
void get_mks_heater_bed_target();
void set_mks_heater_bed_target(int target);
void get_mks_hot_target();
void set_mks_hot_target(int target);
void filament_extruder_target();
void filament_heater_bed_target();
void filament_hot_target();
void filament_fan0();
void filament_fan2();
//3.1.3 新增fan3
void filament_fan3();
void go_to_reset();
void go_to_about();
void go_to_network();
void scan_ssid_and_show();
void refresh_page_wifi_list();
void get_wifi_list_ssid(int index);
void set_print_filament_target();
void complete_print();
void back_to_main();
void go_to_syntony_move();
void print_ssid_psk(char *psk);
void filament_pop_2_yes();
void clear_page_preview();
void set_mks_babystep(std::string value);
void get_mks_babystep();
void clear_cp0_image();
void printer_set_babystep();
int get_mks_fila_status();
void set_mks_fila_status();
void init_mks_status();
void after_scan_refresh_page();
int detect_disk();
void set_printing_shutdown();
void go_to_pid_working();
void mks_get_version();
void wifi_save_config();
void disable_page_about_successed();
void finish_tjc_update();
void filament_unload();
int get_cal_printed_time(int print_time);

int get_mks_total_printed_time();
void set_mks_total_printed_time(int printed_time);

void get_total_time();

void do_not_x_clear();

void do_x_clear();

void level_mode_printing_set_target();

void level_mode_printing_print_file();

void update_finished_tips();

bool get_mks_oobe_enabled();

void set_mks_oobe_enabled(bool enable);

void pre_open_auto_level_init();

void open_go_to_syntony_move();

void move_motors_off();

void open_syntony_finish();

void open_set_print_filament_target();

void open_set_filament_extruder_target(bool positive);

void refresh_page_filament_video_2();

void open_start_extrude();

void open_null_2_enter();

void open_more_level_finish();

void open_down_50();

void close_mcu_port();

void print_start();

int get_mks_net_status();

void set_mks_net_wifi();

void set_mks_net_eth();

void refresh_page_unloading();

//3.1.0 CLL 新增自动调平前设置热床温度页面
void set_auto_level_heater_bed_target(bool positive);

//3.1.0 CLL 使网页打印显示预览图
void clear_previous_data();

//3.1.0 CLL 报错弹窗
void detect_error();

//3.1.0 CLL 新增调平前热床加热界面
void refresh_page_level_null_1();

//3.1.0 CLL 新增开机引导调平前热床加热界面
void refresh_page_open_heater_bed();

//3.1.0 CLL 新增热床调平
void bed_leveling_switch(bool positive);

//3.1.1 CLL 打印完成或取消时保存zoffset值
void save_current_zoffset();

//3.1.3 CLL 打印前判断耗材种类并弹窗
void check_filament_type();

void refresh_page_preview_pop();

#endif
