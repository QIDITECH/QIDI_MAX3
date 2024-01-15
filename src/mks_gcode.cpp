#include <unistd.h>

#include <sstream>
#include <regex>

#include "../include/MakerbaseCommand.h"
#include "../include/MoonrakerAPI.h"
#include "../include/mks_log.h"
#include "../include/mks_gcode.h"
#include "../include/event.h"
#include "../include/ui.h"
#include "../include/mks_file.h"

extern std::string str_manual_level_offset;
extern std::string printer_webhooks_state;
extern std::string printer_webhooks_state_message;

/* 共振补偿值 */
extern std::string page_syntony_shaper_freq_x;
extern std::string page_syntony_shaper_freq_y;


extern bool all_level_saving;

//3.1.0 CLL 报错弹窗
std::string output_console;

//4.3.7 CLL 收到网页操作信息会退出息屏
extern int current_page_id;
extern int previous_page_id;
extern bool previous_caselight_value;
extern std::string printer_idle_timeout_state;

// extern std::string mks_babystep_value;              // 获取调平补偿值后保存babystep

//4.3.7 CLL 修改网页打印信息订阅
nlohmann::json output_metadata;
extern bool jump_to_print;
extern std::string printer_print_stats_state;

void parse_gcode_response(nlohmann::json params) {
    std::cout << params << std::endl;
    if (params != nlohmann::detail::value_t::null) {
        std::string params0 = params[0];
        // std::cout << params0.substr(0, 23) << std::endl;

        //4.3.7 CLL 收到网页操作信息会退出息屏
        if (current_page_id == TJC_PAGE_SCREEN_SLEEP) {
           page_to(previous_page_id);
           if (previous_caselight_value == true) {
                led_on_off();
                previous_caselight_value = false;
            }
        }

        // bltouch: z_offset: 1.000
        if (params0 == "// Klipper state: Ready") {
            MKSLOG("重启Klipper已准备就绪，发送订阅内容");
            printer_webhooks_state = "ready";
            //4.3.10 CLL 修复页面卡住问题
            printer_idle_timeout_state = "Ready";
            printer_webhooks_state_message = "Klipper state: Ready";
            // if (all_level_saving == false) {
            sleep(5);
            sub_object_status();
            sleep(2);
            get_object_status();
            // printer_set_babystep();
            // sleep(1);
            init_mks_status();      // 重启后初始化之前保存的参数
            if (all_level_saving == false) {
                all_level_saving = true;
            }
            // printer_webhooks_state_message = "Klipper state: Ready";
            MKSLOG_YELLOW("重启之后打印下 %s", printer_webhooks_state.c_str());
        } else if (params0 == "// Klipper state: Disconnect") {
            sub_object_status();
            // sleep(2);
            // get_object_status();
            // Klipper state: Disconnect
        } else if (params0.substr(0, 19) == "// PID parameters: ") {
            MKSLOG_RED("// PID parameters: ");
            std::string str{"(\\d+\\.\\d+)"};       // 匹配小数
            std::smatch matchResult;
            std::regex re(str);
            if (std::regex_match(params0, matchResult, re)) {
                std::cout << "pid_Kp == " << matchResult[0] << std::endl;
                std::cout << "pid_Ki == " << matchResult[1] << std::endl;
                std::cout << "pid_Kd == " << matchResult[2] << std::endl;
            }
            // 匹配到的pid转化为字符串尝试一下
            std::cout << (std::string)matchResult[0] << std::endl;
            std::cout << (std::string)matchResult[1] << std::endl;
            std::cout << (std::string)matchResult[2] << std::endl;
            std::cout << "成功获得PID的数值" << std::endl;
        //4.1.4 CLL 修改调平
        /*} else if (params0.substr(0, 20) == "// probe: z_offset: ") {
            MKSLOG_RED("得到z_offset: %s", params0.substr(20).c_str());
            float temp;
            std::stringstream ss;
            ss << params0.substr(20);
            ss >> temp;
            temp = -temp;
            temp = temp - 0.15;          // 按照要求减去0.15mm
            std::string value = std::to_string(temp);
            std::string babystep = value.substr(0, value.find(".") + 4);
            set_mks_babystep(babystep);               // 设置babystep到我们的配置文件里面去
        } else if (params0.substr(0, 22) == "// bltouch: z_offset: ") {
            MKSLOG_RED("得到z_offset: %s", params0.substr(22).c_str());
            float temp;
            std::stringstream ss;
            ss << params0.substr(22);
            ss >> temp;
            temp = -temp;
            temp = temp - 0.15;          // 按照要求减去0.15mm
            std::string value = std::to_string(temp);
            std::string babystep = value.substr(0, value.find(".") + 4);
            set_mks_babystep(babystep);               // 设置babystep到我们的配置文件里面去*/
        } else if (params0 == "// action:cancel") {
            //3.1.0 修复函数冲突问题
            //back_to_main();
        } else if (params0.substr(0, 28) == "// Klipper state: Disconnect") {
            // printer_webhooks_state_message = "Restarting ...";
        } else if (params0.substr(0, 23) == "!! Must home axis first") {
            move_home_tips();
        } else if (params0.substr(0, 29) == "!! Extrude below minimum temp") {
            filament_tips();
        } else if (params0.substr(0, 31) == "// Recommended shaper_type_x = ") {
            std::string str{"(\\d+\\.\\d+)"};       // 匹配小数
            std::smatch matchResult;
            std::regex re(str);
            std::string temp = params0.substr(31);
            if (std::regex_search(temp, matchResult, re)) {
                page_syntony_shaper_freq_x = matchResult[0];
            }
            std::cout << "得到共振补偿的界面" << std::endl;
            // page_syntony_shaper_freq_x = params0.substr(52);
            MKSLOG_YELLOW("Shaper_freq_x = %s", page_syntony_shaper_freq_x.c_str());
        } else if (params0.substr(0, 31) == "// Recommended shaper_type_y = ") {
            std::string str{"(\\d+\\.\\d+)"};
            std::smatch matchResult;
            std::regex re(str);
            std::string temp = params0.substr(31);
            if (std::regex_search(temp, matchResult, re)) {
                page_syntony_shaper_freq_y = matchResult[0];
            }
            std::cout << "得到共振补偿的界面" << std::endl;
            MKSLOG_YELLOW("Shaper_freq_y = %s", page_syntony_shaper_freq_y.c_str());
            // page_syntony_shaper_freq_y = params0.substr(51);
        } else if (params0.substr(0, 14) == "// Z position:") {
            int start = params0.find(">") + 1;
            int end = params0.substr(start).find("<") - 1;
            str_manual_level_offset = params0.substr(start, end);
            std::cout << params0.substr(start, end) << std::endl;
        } else if (params0.substr(0, 21) == "!! Move out of range:") {
            move_tips();
        } else if (params0.substr(0, 52) == "!! Can not update MCU 'mcu' config as it is shutdown") {
            printer_webhooks_state_message = "Can not update MCU 'mcu' config as it is shutdown";
        } else if (params0.substr(0, 33) == "// accelerometer values (x, y, z)") {

        } else if (params0.substr(0, 12) == "// Lost comm") {

        } else if (params0 == "Can not update") {
            
        } else if (params0 == "!! Printer is not ready") { //3.1.0 CLL 修复报错页面弹窗bug

        } else if (params0 == "!! Insufficient disk space, unable to read the file.") {
            page_to(TJC_PAGE_MEMORY_WARNING);
        } else if (params0.substr(0, 2) == "!!") {
            // 3.1.0 CLL 报错弹窗
            output_console = params0;
            detect_error();
        } else if (params0.substr(0, 12) == "// metadata=") { //4.3.7 CLL 修改网页打印信息订阅
            std::string str_metadata = params0.substr(12);
            output_metadata = string2json(str_metadata);
            std::cout << output_metadata << std::endl;
            parse_file_estimated_time_send(output_metadata);
            jump_to_print = true;
            printer_print_stats_state = "printing";
            MKSLOG_BLUE("跳转至打印");
        }
    }
}
