#ifndef UI_H
#define UI_H

#define TJC_5

#define XINDI_PLUS  1
// #define XINDI_MAX   0

#ifdef TJC_5

#define TJC_PAGE_OPEN_LANGUAGE              0
#define TJC_PAGE_OPEN_LANGUAGE_NEXT         0x02
#define TJC_PAGE_OPEN_LANGUAGE_SKIP         0x09

#define TJC_PAGE_OPEN_LEVEL_1               1
#define TJC_PAGE_OPEN_LEVEL_1_PREVIOUS      0x02
#define TJC_PAGE_OPEN_LEVEL_1_NEXT          0x03

#define TJC_PAGE_OPEN_LEVELINIT             2

#define TJC_PAGE_OPEN_LEVEL                 3
#define TJC_PAGE_OPEN_LEVEL_001             0x03
#define TJC_PAGE_OPEN_LEVEL_005             0x04
#define TJC_PAGE_OPEN_LEVEL_01              0x05
#define TJC_PAGE_OPEN_LEVEL__1               0x06
#define TJC_PAGE_OPEN_LEVEL_UP              0x08
#define TJC_PAGE_OPEN_LEVEL_DOWN            0x09
#define TJC_PAGE_OPEN_LEVEL_ENTER           0x0a

#define TJC_PAGE_OPEN_LEVELING              4

#define TJC_PAGE_OPEN_LEVELED               5
#define TJC_PAGE_OPEN_LEVELED_FINISH        0x02

#define TJC_PAGE_OPEN_SYNTONY               6

#define TJC_PAGE_OPEN_FILAMENT_1            7       // 作废
#define TJC_PAGE_OPEN_FILAMENT_1_NEXT       0x02    // 作废

#define TJC_PAGE_NULL_2                     7
#define TJC_PAGE_NULL_2_BACK                0x00
#define TJC_PAGE_NULL_2_ENTER               0x01

#define TJC_PAGE_MORE_LEVEL                 8
#define TJC_PAGE_MORE_LEVEL_FINISH          0x01
#define TJC_PAGE_MORE_LEVEL_PRINT           0x02

#define TJC_PAGE_MORE_LEVEL_MAX             9
#define TJC_PAGE_MORE_LEVEL_MAX_BACK        0x01
#define TJC_PAGE_MORE_LEVEL_MAX_NEXT        0x02

#define TJC_PAGE_MORE_LEVEL_PLU             10
#define TJC_PAGE_MORE_LEVEL_PLU_BACK        0x01
#define TJC_PAGE_MORE_LEVEL_PLU_ENTER       0x02

#define TJC_PAGE_OPEN_FILAMENT_2            8
#define TJC_PAGE_OPEN_FILAMENT_2_PREVIOUS   0x03
#define TJC_PAGE_OPEN_FILAMENT_2_NEXT       0x04
#define TJC_PAGE_OPEN_FILAMENT_2_DECREASE   0x0b
#define TJC_PAGE_OPEN_FILAMENT_2_INCREASE   0x0c
#define TJC_PAGE_OPEN_FILAMENT_2_10         0x06
#define TJC_PAGE_OPEN_FILAMENT_2_20         0x07
#define TJC_PAGE_OPEN_FILAMENT_2_50         0x08
#define TJC_PAGE_OPEN_FILAMENT_2_UP         0x09
#define TJC_PAGE_OPEN_FILAMENT_2_DOWN       0x0a

#define TJC_PAGE_MORE_LEVEL_2               10
#define TJC_PAGE_MORE_LEVEL_2_PLA           0x01
#define TJC_PAGE_MORE_LEVEL_2_ABS           0x02

#define TJC_PAGE_OPEN_VIDEO_1               87
#define TJC_PAGE_OPEN_VIDEO_1_PREVIOUS      0x02
#define TJC_PAGE_OPEN_VIDEO_1_RIGHT         0x03

#define TJC_PAGE_OPEN_VIDEO_2               88
#define TJC_PAGE_OPEN_VIDEO_2_PREVIOUS      0x02
#define TJC_PAGE_OPEN_VIDEO_2_RIGHT         0x03

#define TJC_PAGE_OPEN_VIDEO_3               89
#define TJC_PAGE_OPEN_VIDEO_3_PREVIOUS      0x02
#define TJC_PAGE_OPEN_VIDEO_3_RIGHT         0x03
#define TJC_PAGE_OPEN_VIDEO_3_EXTRUDE       0x01

#define TJC_PAGE_OPEN_VIDEO_4               90
#define TJC_PAGE_OPEN_VIDEO_4_PREVIOUS      0x02
#define TJC_PAGE_OPEN_VIDEO_4_NEXT          0x03

#define TJC_PAGE_FILAMENT_VIDEO_1           92
#define TJC_PAGE_FILAMENT_VIDEO_1_RIGHT     0x01

#define TJC_PAGE_FILAMENT_VIDEO_2           93
#define TJC_PAGE_FILAMENT_VIDEO_2_DECREASE  0x00
#define TJC_PAGE_FILAMENT_VIDEO_2_INCREASE  0x02
#define TJC_PAGE_FILAMENT_VIDEO_2_RIGHT     0x01
#define TJC_PAGE_FILAMENT_VIDEO_2_TARGET    0x04

#define TJC_PAGE_FILAMENT_VIDEO_3           94
#define TJC_PAGE_FILAMENT_VIDEO_3_EXTRUDE   0x01
#define TJC_PAGE_FILAMENT_VIDEO_3_NEXT      0x00



#define TJC_PAGE_LOGO                       11

#define TJC_PAGE_MAIN                       12
#define TJC_PAGE_MAIN_BTN_HOME              0x07
#define TJC_PAGE_MAIN_BTN_FILE              0x08
#define TJC_PAGE_MAIN_BTN_TOOL              0x09
#define TJC_PAGE_MAIN_BTN_SERVICE           0x0a
#define TJC_PAGE_MAIN_LIGHT                 0x01
#define TJC_PAGE_MAIN_VOICE                 0x02
#define TJC_PAGE_MAIN_LOCK                  0x03

#define TJC_PAGE_FILE_LIST_1                13
#define TJC_PAGE_FILE_LIST_1_BTN_1          9
#define TJC_PAGE_FILE_LIST_1_BTN_2          10
#define TJC_PAGE_FILE_LIST_1_BTN_3          11
#define TJC_PAGE_FILE_LIST_1_BTN_4          12
#define TJC_PAGE_FILE_LIST_1_BTN_5          13
#define TJC_PAGE_FILE_LIST_1_BTN_6          14
#define TJC_PAGE_FILE_LIST_1_BTN_7          15
#define TJC_PAGE_FILE_LIST_1_BTN_8          16
#define TJC_PAGE_FILE_LIST_1_BTN_PREVIOUS   0x11
#define TJC_PAGE_FILE_LIST_1_BTN_NEXT       0x12
#define TJC_PAGE_FILE_LIST_1_BTN_HOME       0x13
#define TJC_PAGE_FILE_LIST_1_BTN_FILE       0x14
#define TJC_PAGE_FILE_LIST_1_BTN_TOOL       0x15
#define TJC_PAGE_FILE_LIST_1_BTN_SERVICE    0x16

#define TJC_PAGE_FILE_LIST_2                14
#define TJC_PAGE_FILE_LIST_2_BTN_1          0x01
#define TJC_PAGE_FILE_LIST_2_BTN_2          0x02
#define TJC_PAGE_FILE_LIST_2_BTN_3          0x03
#define TJC_PAGE_FILE_LIST_2_BTN_4          0x04
#define TJC_PAGE_FILE_LIST_2_BTN_5          0x05
#define TJC_PAGE_FILE_LIST_2_BTN_6          0x06
#define TJC_PAGE_FILE_LIST_2_BTN_7          0x07
#define TJC_PAGE_FILE_LIST_2_BTN_8          0x08

#define TJC_PAGE_FILE_LIST_2_BTN_BACK       0x11
#define TJC_PAGE_FILE_LIST_2_BTN_PREVIOUS   0x12
#define TJC_PAGE_FILE_LIST_2_BTN_NEXT       0x13
#define TJC_PAGE_FILE_LIST_2_BTN_HOME       0x14
#define TJC_PAGE_FILE_LIST_2_BTN_FILE       0x15
#define TJC_PAGE_FILE_LIST_2_BTN_TOOL       0x16
#define TJC_PAGE_FILE_LIST_2_BTN_SERVICE    0x17

#define TJC_PAGE_PREVIEW                    15
#define TJC_PAGE_PREVIEW_BTN_START          0x00
#define TJC_PAGE_PREVIEW_BTN_DELETE         0x01
#define TJC_PAGE_PREVIEW_BTN_BACK           0x02
//3.1.0 CLL 新增热床调平
#define TJC_PAGE_PREVIEW_BED_LEVELING       0x03

#define TJC_PAGE_DELETE_FILE                16
#define TJC_PAGE_DELETE_FILE_YES            0x02
#define TJC_PAGE_DELETE_FILE_NO             0x03

//3.1.3 CLL 重置打印界面
#define TJC_PAGE_PRINTING                   17
#define TJC_PAGE_PRINTING_SET_EXTRUDER      0x00
#define TJC_PAGE_PRINTING_SET_HEATER_BED    0x01
#define TJC_PAGE_PRINTING_SET_HOT           0x02
#define TJC_PAGE_PRINTING_SET_Z_OFFSET      0x03
#define TJC_PAGE_PRINTING_BTN_CASELIGHT     0x04
#define TJC_PAGE_PRINTING_SET_SPEED         0x05
#define TJC_PAGE_PRINTING_SET_FLOW          0x06
#define TJC_PAGE_PRINTING_SET_FAN_0         0x07
#define TJC_PAGE_PRINTING_SET_FAN_1         0x08
#define TJC_PAGE_PRINTING_SET_FAN_3         0x09
#define TJC_PAGE_PRINTING_PAUSE_RESUME      0x0a
#define TJC_PAGE_PRINTING_BTN_STOP          0x0b

#define TJC_PAGE_RPINTING_BTN_SHUTDOWN      0x0d

#define TJC_PAGE_KEYBOARD_PRINT             6

#define TJC_PAGE_PRINT_ZOFFSET              20
#define TJC_PAGE_PRINT_ZOFFSET_001          0x08
#define TJC_PAGE_PRINT_ZOFFSET_01           0x0a
#define TJC_PAGE_PRINT_ZOFFSET_005          0x09
#define TJC_PAGE_PRINT_ZOFFSET_1            0x0b
#define TJC_PAGE_PRINT_ZOFFSET_UP           0x02
#define TJC_PAGE_PRINT_ZOFFSET_DOWN         0x03
#define TJC_PAGE_PRINT_ZOFFSET_PAUSE_RESUME 0x0d
#define TJC_PAGE_PRINT_ZOFFSET_STOP         0x12
#define TJC_PAGE_PRINT_ZOFFSET_BACK         0x05

#define TJC_PAGE_PRINT_FILAMENT             21
#define TJC_PAGE_PRINT_FILAMENT_PAUSE_RESUME       0x0d
#define TJC_PAGE_PRINT_FILAMENT_STOP        0x12
#define TJC_PAGE_PRINT_FILAMENT_TARGET_UP   0x08
#define TJC_PAGE_PRINT_FILAMENT_TARGET_DOWN 0x09
#define TJC_PAGE_PRINT_FILAMENT_RETRACT     0x06
#define TJC_PAGE_PRINT_FILAMENT_EXTRUDE     0x07
#define TJC_PAGE_PRINT_FILAMENT_10          0x03
#define TJC_PAGE_PRINT_FILAMENT_20          0x04
#define TJC_PAGE_PRINT_FILAMENT_50          0x05
#define TJC_PAGE_PRINT_FILAMENT_TARGET      0x0a

#define TJC_PAGE_MOVE                       22
#define TJC_PAGE_MOVE_FILAMENT              0x0d
#define TJC_PAGE_MOVE_LEVEL_MODE            0x0e
#define TJC_PAGE_MOVE_NETWORK               0x0f
#define TJC_PAGE_MOVE_01                    0x02
#define TJC_PAGE_MOVE_1                     0x03
#define TJC_PAGE_MOVE_10                    0x04
#define TJC_PAGE_MOVE_X_UP                  0x07
#define TJC_PAGE_MOVE_X_DOWN                0x08
#define TJC_PAGE_MOVE_Y_DOWN                0x05
#define TJC_PAGE_MOVE_Y_UP                  0x06
#define TJC_PAGE_MOVE_HOME                  0x0b
#define TJC_PAGE_MOVE_Z_UP                  0x09
#define TJC_PAGE_MVOE_Z_DOWN                0x0a
#define TJC_PAGE_MOVE_BTN_HOME              0x10
#define TJC_PAGE_MOVE_BTN_FILE              0x11
#define TJC_PAGE_MOVE_BTN_SERVICE           0x13
#define TJC_PAGE_MOVE_BTN_STOP              0x17
#define TJC_PAGE_MOVE_M84                   0x14

#define TJC_PAGE_MOVE_POP_1                 23
#define TJC_PAGE_MOVE_POP_1_YES             0x02
#define TJC_PAGE_MOVE_POP_1_NO              0x03

#define TJC_PAGE_MOVE_POP_2                 24
#define TJC_PAGE_MOVE_POP_2_YES             0x02
#define TJC_PAGE_MOVE_POP_2_NO              0x03

#define TJC_PAGE_MOVE_POP_3                 25
#define TJC_PAGE_MOVE_POP_3_YES             0x02
#define TJC_PAGE_MOVE_POP_3_NO              0x03

#define TJC_PAGE_FILAMENT                   26
#define TJC_PAGE_FILAMENT_MOVE              0x08
#define TJC_PAGE_FILAMENT_AUTOLEVEL         0x0a
#define TJC_PAGE_FILAMENT_NETWORK           0x0b
#define TJC_PAGE_FILAMENT_BTN_HOME          0x0c
#define TJC_PAGE_FILAMENT_BTN_FILE          0x0d
#define TJC_PAGE_FILAMENT_BTN_SERVICE       0x0f
#define TJC_PAGE_FILAMENT_UNLOAD            0x15
#define TJC_PAGE_FILAMENT_BTN_10            0x1e
#define TJC_PAGE_FILAMENT_BTN_20            0x1f
#define TJC_PAGE_FILAMENT_BTN_50            0x20
#define TJC_PAGE_FILAMENT_BTN_RETRACT       0x16
#define TJC_PAGE_FILAMENT_BTN_EXTRUDE       0x17
#define TJC_PAGE_FILAMENT_BTN_EXTRUDER      0x22
#define TJC_PAGE_FILAMENT_BTN_HEATER_BED    0x19
#define TJC_PAGE_FILAMENT_BTN_HOT           0x1a
#define TJC_PAGE_FILAMENT_BTN_FAN_1         0x06
#define TJC_PAGE_FILAMENT_BTN_FAN_2         0x07
//3.1.3 CLL 新增fan3
#define TJC_PAGE_FILAMENT_BTN_FAN_3         0x05
#define TJC_PAGE_FILAMENT_BTN_FILAMENT_SENSOR   0x14
#define TJC_PAGE_FILAMENT_EXTRUDER          0x11
#define TJC_PAGE_FILAMENT_HEATER_BED        0x12
#define TJC_PAGE_FILAMENT_HOT               0x13

#define TJC_PAGE_FILAMENT_BTN_STOP          0x21


#define TJC_PAGE_FILAMENT_POP               27
#define TJC_PAGE_FILAMENT_POP_YES           0x02

#ifdef XINDI_PLUS
#define TJC_PAGE_FILAMENT_POP_2             28
#else
#define TJC_PAGE_FILAMENT_POP_2             64
#endif
#define TJC_PAGE_FILAMENT_POP_2_YES         0x02

#define TJC_PAGE_KB_FILAMENT_1              29
#define TJC_PAGE_KB_FILAMENT_1_BACK         0x0f

#define TJC_PAGE_KB_FILAMENT_2              30

#define TJC_PAGE_KB_FILAMENT_3              31

#define TJC_PAGE_LEVEL_MODE                 32
#define TJC_PAGE_LEVEL_MODE_HOME            0x01
#define TJC_PAGE_LEVEL_MODE_FILE            0x02
#define TJC_PAGE_LEVEL_MODE_SERVICE         0x04
#define TJC_PAGE_LEVEL_MODE_MOVE            0x05
#define TJC_PAGE_LEVEL_MODE_FILAMENT        0x06
#define TJC_PAGE_LEVEL_MODE_ZOFFSET         0x07
#define TJC_PAGE_LEVEL_MODE_NETWORK         0x08
#define TJC_PAGE_LEVEL_MODE_AUTO_LEVEL      0x09
#define TJC_PAGE_LEVEL_MODE_MANUAL_LEVEL    0x0b
#define TJC_PAGE_LEVEL_MODE_SET_ZOFFSET     0x0a
#define TJC_PAGE_LEVEL_MODE_CALIBRATION     0x0a
#define TJC_PAGE_LEVEL_MODE_SYNTONY_MOVE    0x0c
#define TJC_PAGE_LEVEL_MODE_PID             0x0d

#define TJC_PAGE_LEVELING_NULL              33
#define TJC_PAGE_LEVELING_NULL_BTN_HOME     0x03
#define TJC_PAGE_LEVELING_NULL_BTN_FILE     0x04
#define TJC_PAGE_LEVELING_NULL_BTN_SERVICE  0x06
#define TJC_PAGE_LEVELING_NULL_BTN_BACK     0x07
#define TJC_PAGE_LEVELING_NULL_ENTER        0x08

#define TJC_PAGE_LEVELING_INIT              34

#define TJC_PAGE_AUTO_LEVEL                 35
#define TJC_PAGE_AUTO_LEVEL_001             0x02
#define TJC_PAGE_AUTO_LEVEL_0025            0x03
#define TJC_PAGE_AUTO_LEVEL_005             0x04
#define TJC_PAGE_AUTO_LEVEL_1               0x05
#define TJC_PAGE_AUTO_LEVEL_UP              0x06
#define TJC_PAGE_AUTO_LEVEL_DOWN            0x07
#define TJC_PAGE_AUTO_LEVEL_ENTER           0x08

#define TJC_PAGE_AUTO_MOVE                  36

#define TJC_PAGE_AUTO_FINISH                37
#define TJC_PAGE_AUTO_FINISH_YES            0x01

#define TJC_PAGE_MANUAL_LEVEL               38
#define TJC_PAGE_MANUAL_LEVEL_001           0x02
#define TJC_PAGE_MANUAL_LEVEL_0025          0x03
#define TJC_PAGE_MANUAL_LEVEL_005           0x04
#define TJC_PAGE_MANUAL_LEVEL_1             0x09
#define TJC_PAGE_MANUAL_LEVEL_UP            0x05
#define TJC_PAGE_MANUAL_LEVEL_DOWN          0x06
#define TJC_PAGE_MANUAL_LEVEL_ENTER         0x07

#define TJC_PAGE_MANUAL_MOVE                39

#define TJC_PAGE_MANUAL_FINISH              40
#define TJC_PAGE_MANUAL_FINISH_YES          0x01

#define TJC_PAGE_SET_ZOFFSET                41
#define TJC_PAGE_SET_ZOFFSET_BACK           0x06
#define TJC_PAGE_SET_ZOFFSET_HOME           0x02
#define TJC_PAGE_SET_ZOFFSET_FILE           0x03
#define TJC_PAGE_SET_ZOFFSET_SERVICE        0x05
#define TJC_PAGE_SET_ZOFFSET_SAVE           0x01
#define TJC_PAGE_SET_ZOFFSET_B1             0x07
#define TJC_PAGE_SET_ZOFFSET_B2             0x08
#define TJC_PAGE_SET_ZOFFSET_B3             0x09
#define TJC_PAGE_SET_ZOFFSET_B4             0x0a
#define TJC_PAGE_SET_ZOFFSET_B5             0x0b
#define TJC_PAGE_SET_ZOFFSET_B6             0x0c
#define TJC_PAGE_SET_ZOFFSET_B7             0x0d
#define TJC_PAGE_SET_ZOFFSET_B8             0x0e
#define TJC_PAGE_SET_ZOFFSET_B9             0x0f
#define TJC_PAGE_SET_ZOFFSET_B10            0x10
#define TJC_PAGE_SET_ZOFFSET_B11            0x11
#define TJC_PAGE_SET_ZOFFSET_B12            0x12
#define TJC_PAGE_SET_ZOFFSET_B13            0x13
#define TJC_PAGE_SET_ZOFFSET_B14            0x14
#define TJC_PAGE_SET_ZOFFSET_B15            0x15
#define TJC_PAGE_SET_ZOFFSET_B16            0x16

#define TJC_PAGE_SYNTONY_MOVE               42

#define TJC_PAGE_SYNTONY_FINISH             43

#define TJC_PAGE_WIFI_LIST_1                44
#define TJC_PAGE_WIFI_LIST_1_BTN_HOME       0x06
#define TJC_PAGE_WIFI_LIST_1_BTN_FILE       0x07
#define TJC_PAGE_WIFI_LIST_1_BTN_SERVICE    0x09
#define TJC_PAGE_WIFI_LIST_1_MOVE           0x02
#define TJC_PAGE_WIFI_LIST_1_FILAMENT       0x03
#define TJC_PAGE_WIFI_LIST_1_AUTO_LEVEL     0x04
#define TJC_PAGE_WIFI_LIST_1_PREVIOUS       0x0b
#define TJC_PAGE_WIFI_LIST_1_NEXT           0x0c
#define TJC_PAGE_WIFI_LIST_1_SSID_1         0x15
#define TJC_PAGE_WIFI_LIST_1_SSID_2         0x11
#define TJC_PAGE_WIFI_LIST_1_SSID_3         0x12
#define TJC_PAGE_WIFI_LIST_1_SSID_4         0x13
#define TJC_PAGE_WIFI_LIST_1_SSID_5         0x14
#define TJC_PAGE_WIFI_LIST_1_REFRESH        0x16

#define TJC_PAGE_WIFI_LIST_2                45
#define TJC_PAGE_WIFI_LIST_2_BTN_HOME       0x06
#define TJC_PAGE_WIFI_LIST_2_BTN_FILE       0x07
#define TJC_PAGE_WIFI_LIST_2_BTN_SERVICE    0x09
#define TJC_PAGE_WIFI_LIST_2_MOVE           0x02
#define TJC_PAGE_WIFI_LIST_2_FILAMENT       0x03
#define TJC_PAGE_WIFI_LIST_2_AUTO_LEVEL     0x04
#define TJC_PAGE_WIFI_LIST_2_PREVIOUS       0x0b
#define TJC_PAGE_WIFI_LIST_2_NEXT           0x0c
#define TJC_PAGE_WIFI_LIST_2_SSID_1         0x15
#define TJC_PAGE_WIFI_LIST_2_SSID_2         0x11
#define TJC_PAGE_WIFI_LIST_2_SSID_3         0x12
#define TJC_PAGE_WIFI_LIST_2_SSID_4         0x13
#define TJC_PAGE_WIFI_LIST_2_SSID_5         0x14
#define TJC_PAGE_WIFI_LIST_2_REFRESH        0x16
#define TJC_PAGE_WIFI_LIST_2_EHTNET         0x17

// #define TJC_PAGE_WIFI_LIST_2                44
// #define TJC_PAGE_WIFI_LIST_2_BTN_HOME       0x05
// #define TJC_PAGE_WIFI_LIST_2_BTN_FILE       0x06
// #define TJC_PAGE_WIFI_LIST_2_BTN_SERVICE    0x08
// #define TJC_PAGE_WIFI_LIST_2_MOVE          0x01
// #define TJC_PAGE_WIFI_LIST_2_FILAMENT      0x02
// #define TJC_PAGE_WIFI_LIST_2_AUTO_LEVEL    0x03

#define TJC_PAGE_INTERNET                   46
#define TJC_PAGE_INTERNET_BTN_HOME          0x05
#define TJC_PAGE_INTERNET_BTN_FILE          0x06
#define TJC_PAGE_INTERNET_BTN_SERVICE       0x08
#define TJC_PAGE_INTERNET_MOVE              0x01
#define TJC_PAGE_INTERNET_FILAMENT          0x02
#define TJC_PAGE_INTERNET_AUTO_LEVEL        0x03
#define TJC_PAGE_INTERNET_WIFI              0x17

#define TJC_PAGE_LANGUAGE                   47
#define TJC_PAGE_LANGUAGE_BTN_HOME          0x05
#define TJC_PAGE_LANGUAGE_BTN_FILE          0x06
#define TJC_PAGE_LANGUAGE_BTN_TOOL          0x07
#define TJC_PAGE_LANGUAGE_SERVICE           0x02
#define TJC_PAGE_LANGUAGE_RESET             0x03
#define TJC_PAGE_LANGUAGE_ABOUT             0x04

#define TJC_PAGE_SERVICE                    48
#define TJC_PAGE_SERVICE_BTN_HOME           0x05
#define TJC_PAGE_SERVICE_BTN_FILE           0x06
#define TJC_PAGE_SERVICE_BTN_TOOL           0x07
#define TJC_PAGE_SERVICE_LANGUAGE           0x01
#define TJC_PAGE_SERVICE_RESET              0x03
#define TJC_PAGE_SERVICE_ABOUT              0x04

#define TJC_PAGE_RESET                      49
#define TJC_PAGE_RESET_BTN_HOME             0x05
#define TJC_PAGE_RESET_BTN_FILE             0x06
#define TJC_PAGE_RESET_BTN_TOOL             0x07
#define TJC_PAGE_RESET_LANGUAGE             0x01
#define TJC_PAGE_RESET_SERVICE              0x02
#define TJC_PAGE_RESET_ABOUT                0x04
#define TJC_PAGE_RESET_RESTART_KLIPPER      0x09
#define TJC_PAGE_RESET_FIRMWARE_RESTART     0x0a

#ifdef  XINDI_PLUS
#define TJC_PAGE_ABOUT                      50
#else
#define TJC_PAGE_ABOUT                      99
#endif
#define TJC_PAGE_ABOUT_S_BTN                0x03  //2023.5.9 CLL 隐藏开机引导
#define TJC_PAGE_ABOUT_BTN_HOME             0x04
#define TJC_PAGE_ABOUT_BTN_FILE             0x05
#define TJC_PAGE_ABOUT_BTN_TOOL             0x06
#define TJC_PAGE_ABOUT_LANGUAGE             0x01
#define TJC_PAGE_ABOUT_SERVICE              0x02
#define TJC_PAGE_ABOUT_RESET                0x0a
#define TJC_PAGE_ABOUT_UPDATE               0x0c
#define TJC_PAGE_ABOUT_OOBE                 0x0e

#define TJC_PAGE_PRINT_F_POP                53
#define TJC_PAGE_PRINT_F_POP_YES            0x02

#define TJC_PAGE_PRINT_KEYBOARD             0x24
#define TJC_PAGE_PRINT_KEYBOARD_BACK        0x17

#define TJC_PAGE_PRINT_FINISH               19
#define TJC_PAGE_PRINT_FINISH_YES           0x02
// #define TJC_PAGE_PRINT_FINISH_NO            0x03

#define TJC_PAGE_STOP_PRINT                 18
#define TJC_PAGE_STOP_PRINT_YES             0x02
#define TJC_PAGE_STOP_PRINT_NO              0x03

#define TJC_PAGE_KEYBDB                     0x34
#define TJC_PAGE_KEYBDB_BACK                0x17
#define TJC_PAGE_KEYBDB_PAUSE               0x1a
#define TJC_PAGE_KEYBDB_STOP                0x1f

#define TJC_PAGE_SET_ZOFFSET_2              54
#define TJC_PAGE_SET_ZOFFSET_2_001          0x02
#define TJC_PAGE_SET_ZOFFSET_2_0025         0x03
#define TJC_PAGE_SET_ZOFFSET_2_005          0x04
#define TJC_PAGE_SET_ZOFFSET_2_1            0x09
#define TJC_PAGE_SET_ZOFFSET_2_UP           0x05
#define TJC_PAGE_SET_ZOFFSET_2_DOWN         0x06
#define TJC_PAGE_SET_ZOFFSET_2_YES          0x07

#define TJC_PAGE_MANUAL_MOVE_2              55

#define TJC_PAGE_SAVING                     56

#define TJC_PAGE_POWER_OFF                  59

#define TJC_PAGE_SYS_OK                     57
#define TJC_PAGE_SYS_OK_HOME                0x05
#define TJC_PAGE_SYS_OK_FILE                0x06
#define TJC_PAGE_SYS_OK_TOOL                0x07
#define TJC_PAGE_SYS_OK_LANGUAGE            0x01
#define TJC_PAGE_SYS_OK_SERVICE             0x02
#define TJC_PAGE_SYS_OK_REBOOT              0x03
#define TJC_PAGE_SYS_OK_ABOUT               0x04

#define TJC_PAGE_POP_1                      60
#define TJC_PAGE_POP_1_YES                  0x02

#define TJC_PAGE_STOPPING                   58

#define TJC_PAGE_NO_UPDATA                  62
// #define TJC_PAGE_NO_UPDATA                  100
#define TJC_PAGE_NO_UPDATA_S_BTN            0x03 //2023.5.9 CLL 隐藏开机引导
#define TJC_PAGE_NO_UPDATA_BTN_HOME         0x04
#define TJC_PAGE_NO_UPDATA_BTN_FILE         0x05
#define TJC_PAGE_NO_UPDATA_BTN_TOOL         0x06
#define TJC_PAGE_NO_UPDATA_LANGUAGE         0x01
#define TJC_PAGE_NO_UPDATA_SERVICE          0x02
#define TJC_PAGE_NO_UPDATA_RESET            0x09
#define TJC_PAGE_NO_UPDATA_OOBE             0x0e

#define TJC_PAGE_KEYDBA                     51
#define TJC_PAGE_KEYDBA_HOME                0x2c
#define TJC_PAGE_KEYDBA_FILE                0x2d
#define TJC_PAGE_KEYDBA_SERVICE             0x2f
#define TJC_PAGE_KEYDBA_BACK                0x02
#define TJC_PAGE_KEYDBA_ENTER               0x02

#define TJC_PAGE_KEYDBB                     52
#define TJC_PAGE_KEYDBB_PAUSE               0x1a
#define TJC_PAGE_KEYDBB_STOP                0x1f

#define TJC_PAGE_MKS_TEST                   65

#define TJC_PAGE_CHANGE_ZOFFSET             67
#define TJC_PAGE_CHANGE_ZOFFSET_HOME        0x03
#define TJC_PAGE_CHANGE_ZOFFSET_FILE        0x04
#define TJC_PAGE_CHANGE_ZOFFSET_SERVICE     0x06
#define TJC_PAGE_CHANGE_ZOFFSET_BACK        0x07
#define TJC_PAGE_CHANGE_ZOFFSET_ENTER       0x08

#define TJC_PAGE_SET_TEMP_LEVEL             68
#define TJC_PAGE_SET_TEMP_LEVEL_HOME        0x01
#define TJC_PAGE_SET_TEMP_LEVEL_FILE        0x02
#define TJC_PAGE_SET_TEMP_LEVEL_TOOL        0x03
#define TJC_PAGE_SET_TEMP_LEVEL_SERVICE     0x04
#define TJC_PAGE_SET_TEMP_LEVEL_BACK        0x08
#define TJC_PAGE_SET_TEMP_LEVEL_EXTRUDER    0x05
#define TJC_PAGE_SET_TEMP_LEVEL_HOT_BED     0x06
#define TJC_PAGE_SET_TEMP_LEVEL_ENTER       0x07

#define TJC_PAGE_SET_TEMP_LEVEL_KB          69

#define TJC_PAGE_LEVEL_PRINT                70
#define TJC_PAGE_LEVEL_PRINT_STOP           0x01

#define TJC_PAGE_LEVEL_STOP                 71

#define TJC_PAGE_CHOOSE_MODEL               72
#define TJC_PAGE_CHOOSE_MODEL_01            0x01
#define TJC_PAGE_CHOOSE_MODEL_02            0x02
#define TJC_PAGE_CHOOSE_MODEL_03            0x03
#define TJC_PAGE_CHOOSE_MODEL_04            0x04
#define TJC_PAGE_CHOOSE_MODEL_05            0x05
#define TJC_PAGE_CHOOSE_MODEL_06            0x06
#define TJC_PAGE_CHOOSE_MODEL_07            0x07
#define TJC_PAGE_CHOOSE_MODEL_08            0x08
#define TJC_PAGE_CHOOSE_MODEL_09            0x09

#define TJC_PAGE_WIFI_CONNECT               73

#define TJC_PAGE_DISK_DETECT                74
#define TJC_PAGE_DISK_DETECT_ENTER          0x02

#define TJC_PAGE_UPDATED                    75
#define TJC_PAGE_UPDATED_ENTER              0x02

#define TJC_PAGE_PID_WORKING                76

#define TJC_PAGE_PID_FINISH                 77

#define TJC_PAGE_DISK_DETECT_2              78
#define TJC_PAGE_DISK_DETECT_2_HOME         0x01
#define TJC_PAGE_DISK_DETECT_2_TOOL         0x03
#define TJC_PAGE_DISK_DETECT_2_SERVICE      0x04

#define TJC_PAGE_FILAMENT_ERROR             79
#define TJC_PAGE_FILAMENT_OK                0x02

#define TJC_PAGE_X_CLEAR_MAX3               80
#define TJC_PAGE_X_CLEAR_MAX3_YES           0x01
#define TJC_PAGE_X_CLEAR_MAX3_NO            0x02

#define TJC_PAGE_X_CLEAR_PLUS3              81
#define TJC_PAGE_X_CLEAR_PLUS3_YES          0x01
#define TJC_PAGE_X_CLEAR_PLUS3_NO           0x02

#define TJC_PAGE_CLEAR_X_VIDEO              82
#define TJC_PAGE_CLEAR_X_VIDEO_NEXT         0x02

#define TJC_PAGE_WIFI_SUCCESS               83
#define TJC_PAGE_WIFI_SUCCESS_YES           0x02

#define TJC_PAGE_WIFI_FAILED                84
#define TJC_PAGE_WIFI_FAILED_YES            0x02

#define TJC_PAGE_WIFI_SAVE                  85

#define TJC_PAGE_UPDATE_SCREEN              86

#define TJC_PAGE_WIFI_KEYBOARD              91
#define TJC_PAGE_WIFI_KEYBOARD_BACK         0x02 
#define TJC_PAGE_WIFI_KEYBOARD_ENTER        0x03

#define TJC_PAGE_FILAMENTVIDEO1             92
#define TJC_PAGE_FILAMENTVIDEO2             93
#define TJC_PAGE_FILAMENTVIDEO3             94

#define TJC_PAGE_WAIT_POP                   95
#define TJC_PAGE_WAIT_POP_OK                0x02

#define TJC_PAGE_FILAMENT_POP_3             96
#define TJC_PAGE_FILAMENT_POP_3_OK          0x02

#define TJC_PAGE_FILAMENT_SHOWDOWN          97

#define TJC_PAGE_SAVING_2                   101

#define TJC_PAGE_FILAMENT_POP_4             104
#define TJC_PAGE_FILAMENT_POP_4_OK          0x02

#define TJC_PAGE_LEVELING_NULL_2            105
#define TJC_PAGE_LEVELING_NULL_2_BACK       0x00
#define TJC_PAGE_LEVELING_NULL_2_ENTER      0x01

#define TJC_PAGE_FILAMENT_POP_5             106
#define TJC_PAGE_FILAMENT_POP_5_OK          0x02

#define TJC_PAGE_UNLOADING                  107

//3.1.0 CLL 新增调平前热床加热页面
#define TJC_PAGE_LEVEL_NULL_1               108
#define TJC_PAGE_LEVEL_NULL_1_DOWN          0x00
#define TJC_PAGE_LEVEL_NULL_1_UP            0x01
#define TJC_PAGE_LEVEL_NULL_1_ON_OFF        0x02
#define TJC_PAGE_LEVEL_NULL_1_BACK          0x03
#define TJC_PAGE_LEVEL_NULL_1_ENTER         0x04

//3.1.0 CLL 新增调平前热床加热界面
#define TJC_PAGE_LEVEL_NULL_2               109
#define TJC_PAGE_LEVEL_NULL_2_BACK          0x00
#define TJC_PAGE_LEVEL_NULL_2_ENTER         0x01

//3.1.0 CLL 新增报错弹窗
#define TJC_PAGE_DETECT_ERROR               110
#define TJC_PAGE_DETECT_ERROR_YES           0x00

//3.1.0 CLL 新增报错弹窗
#define TJC_PAGE_GCODE_ERROR                111
#define TJC_PAGE_GCODE_ERROR_YES            0x00

//3.1.0 CLL 新增开机引导调平前热床加热界面
#define TJC_PAGE_OPEN_HEATER_BED            112
#define TJC_PAGE_OPEN_HEATER_BED_DOWN       0x00
#define TJC_PAGE_OPEN_HEATER_BED_UP         0x01
#define TJC_PAGE_OPEN_HEATER_BED_ON_OFF     0x02
#define TJC_PAGE_OPEN_HEATER_BED_ENTER      0x03

//3.1.0 CLL 新增开机引导跳过确认弹窗    
#define TJC_PAGE_OPEN_POP_1                 113
#define TJC_PAGE_OPEN_POP_1_YES             0x00
#define TJC_PAGE_OPEN_POP_1_NO              0x01

//3.1.3 CLL 打印前判断耗材种类并弹窗
#define TJC_PAGE_PREVIEW_POP_1               114
#define TJC_PAGE_PREVIEW_POP_2               115
#define TJC_PAGE_PREVIEW_POP_YES             0x00
//4.3.4 CLL 耗材确认弹窗新增不再提示按钮
#define TJC_PAGE_PREVIEW_POP_NO_POP        0x01

#endif


void parse_cmd_msg_from_tjc_screen(char *cmd);
void page_to(int page_id);
void tjc_event_clicked_handler(int page_id, int widget_id, int type_id);
void tjc_event_setted_handler(int page_id, int widget_id, unsigned char first, unsigned char second);
void tjc_event_keyboard(char *cmd);

#endif
