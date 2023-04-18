"use strict";(globalThis["webpackChunkfluidd"]=globalThis["webpackChunkfluidd"]||[]).push([[511],{12789:E=>{E.exports=JSON.parse('{"$schema":"https://raw.githubusercontent.com/martinring/tmlanguage/master/tmlanguage.json","name":"Klipper Config","patterns":[{"include":"#single_line_comment"},{"include":"#config_block"},{"include":"#config_line"},{"include":"#number"},{"include":"#gcode_line"}],"repository":{"single_line_comment":{"patterns":[{"name":"comment.line.number-sign","match":"#(.+)$"},{"name":"comment.line.gcode","match":";(.+)$"}]},"number":{"patterns":[{"name":"constant.numeric","match":"\\\\-?\\\\d+([\\\\.,]\\\\d+)?\\\\b"},{"name":"constant.numeric","match":"\\\\-?[\\\\.,]\\\\d+?\\\\b"}]},"boolean":{"name":"constant.language","match":"(?i)\\\\b(true|false)\\\\b"},"config_block":{"contentName":"keyword.control","begin":"^\\\\[","end":"\\\\]","patterns":[{"include":"#known_config_block_name"},{"include":"#known_driver_type"},{"include":"#single_line_comment"}]},"known_config_block_name":{"name":"storage.type","match":"(?i)\\\\b(ad5206|adc_scaled|adc_temperature|adxl345|angle|bed_mesh|bed_screws|bed_tilt|bltouch|board_pins|controller_fan|delayed_gcode|delta_calibrate|display|display_data|display_glyph|display_status|display_template|dotstar|dual_carriage|duplicate_pin_override|endstop_phase|extruder_stepper|extruder[1-9]{0,1}|fan|fan_generic|filament_motion_sensor|filament_switch_sensor|firmware_retraction|force_move|gcode_arcs|gcode_button|gcode_macro|hall_filament_width_sensor|heater_bed|heater_fan|heater_generic|homing_heaters|homing_override|idle_timeout|include|input_shaper|led|manual_probe|manual_stepper|mcp4018|mcp4451|mcp4728|mcu|menu|multi_pin|neopixel|output_pin|palette2|pause_resume|pca9533|pca9632|printer|probe|quad_gantry_level|replicape|resonance_tester|respond|safe_z_home|samd_sercom|save_variables|screws_tilt_adjust|sdcard_loop|servo|skew_correction|smart_effector|static_digital_output|stepper_(bed|arm|[abcdxy]|z[1-9]{0,1})|sx1509|temperature_fan|temperature_sensor|thermistor|tsl1401cl_filament_width_sensor|verify_heater|virtual_sdcard|z_tilt)\\\\b"},"known_driver_type":{"name":"support.type","match":"(?i)\\\\btmc(2130|2208|2209|2660|5160)\\\\b"},"known_thermistor_type":{"name":"support.type","match":"(?i)\\\\b(EPCOS 100K B57560G104F|ATC Semitec 104GT-2|ATC Semitec 104NT-4-R025H42G|Generic 3950|NTC 100K beta 3950|Honeywell 100K 135-104LAG-J01|NTC 100K MGB18-104F39050L32|SliceEngineering 450|TDK NTCG104LH104JT1)\\\\b"},"known_extruder_sensor_type":{"name":"support.type","match":"(?i)\\\\b(MAX6675|MAX31855|MAX31856|MAX31865|PT100 INA826|AD595|AD597|AD8494|AD8495|AD8496|AD8497|PT1000|BMP280|BME280|BME680|HTU21D|SI7013|SI7020|SI7021|SHT21|LM75|temperature_mcu|temperature_host|DS18B20)\\\\b"},"known_control_type":{"name":"support.type","match":"(?i)\\\\b(watermark|pid)\\\\b"},"known_display_type":{"name":"support.type","match":"(?i)\\\\b(hd44780|st7920|uc1701|ssd1306|sh1106)\\\\b"},"serial":{"name":"support.type","match":"\\\\/dev\\\\/serial\\\\/by-(id|path)\\\\/[\\\\d\\\\w\\\\/\\\\-:\\\\.]+"},"pin":{"patterns":[{"name":"support.type","match":"(?i)[\\\\^~!]*(ar|analog)\\\\d{1,2}"},{"name":"support.type","match":"(?i)[\\\\^~!]*(z:)?[a-z]{1,2}\\\\d{1,2}(\\\\.\\\\d{1,2})?"}]},"config_line":{"begin":"^(\\\\w+)\\\\s*[:=]\\\\s*","beginCaptures":{"1":{"name":"variable.name"}},"end":"$","patterns":[{"include":"#known_thermistor_type"},{"include":"#known_extruder_sensor_type"},{"include":"#known_control_type"},{"include":"#known_display_type"},{"include":"#pin"},{"include":"#serial"},{"include":"#number"},{"include":"#boolean"},{"include":"#single_line_comment"}]},"gcode_line":{"patterns":[{"include":"#gcode_command"},{"include":"#gcode_extended_command"},{"include":"#gcode_parameter"},{"include":"#gcode_extended_parameter"},{"include":"#gcode_macro_block"}]},"gcode_command":{"begin":"(?ix)^\\\\s* ([GMTD]) (?![a-z])","beginCaptures":{"1":{"name":"keyword.operator"}},"end":"\\\\s","patterns":[{"include":"#number"},{"include":"#gcode_macro_block"}]},"gcode_parameter":{"begin":"(?ix)\\\\b ([a-z]) (?![a-z])","beginCaptures":{"1":{"name":"variable.parameter"}},"end":"\\\\s","patterns":[{"include":"#number"},{"include":"#gcode_macro_block"}]},"gcode_extended_command":{"name":"keyword.operator","match":"(?i)^\\\\s*(ABORT|ACCELEROMETER_DEBUG_READ|ACCELEROMETER_DEBUG_WRITE|ACCELEROMETER_MEASURE|ACCELEROMETER_QUERY|ACCEPT|ACTIVATE_EXTRUDER|ANGLE_CALIBRATE|ANGLE_DEBUG_READ|ANGLE_DEBUG_WRITE|BED_MESH_CALIBRATE|BED_MESH_CLEAR|BED_MESH_MAP|BED_MESH_OFFSET|BED_MESH_OUTPUT|BED_MESH_PROFILE|BED_SCREWS_ADJUST|BED_TILT_CALIBRATE|BLTOUCH_DEBUG|BLTOUCH_STORE|CALC_MEASURED_SKEW|CANCEL_PRINT|CLEAR_PAUSE|DELTA_ANALYZE|DELTA_CALIBRATE|DISABLE_FILAMENT_WIDTH_LOG|DISABLE_FILAMENT_WIDTH_SENSOR|DUMP_TMC|ENABLE_FILAMENT_WIDTH_LOG|ENABLE_FILAMENT_WIDTH_SENSOR|ENDSTOP_PHASE_CALIBRATE|FIRMWARE_RESTART|FORCE_MOVE|GET_CURRENT_SKEW|GET_POSITION|GET_RETRACTION|HELP|INIT_TMC|MANUAL_PROBE|MANUAL_STEPPER|MEASURE_AXES_NOISE|PALETTE_CLEAR|PALETTE_CONNECT|PALETTE_CUT|PALETTE_DISCONNECT|PALETTE_SMART_LOAD|PAUSE|PID_CALIBRATE|PROBE|PROBE_ACCURACY|PROBE_CALIBRATE|QUAD_GANTRY_LEVEL|QUERY_ADC|QUERY_ENDSTOPS|QUERY_FILAMENT_SENSOR|QUERY_FILAMENT_WIDTH|QUERY_PROBE|QUERY_RAW_FILAMENT_WIDTH|RESET_FILAMENT_WIDTH_SENSOR|RESET_SMART_EFFECTOR|RESPOND|RESTART|RESTORE_GCODE_STATE|RESUME|SAVE_CONFIG|SAVE_GCODE_STATE|SAVE_VARIABLE|SCREWS_TILT_CALCULATE|SDCARD_LOOP_BEGIN|SDCARD_LOOP_DESIST|SDCARD_LOOP_END|SDCARD_PRINT_FILE|SDCARD_RESET_FILE|SET_DISPLAY_GROUP|SET_DUAL_CARRIAGE|SET_EXTRUDER_ROTATION_DISTANCE|SET_EXTRUDER_STEP_DISTANCE|SET_FAN_SPEED|SET_FILAMENT_SENSOR|SET_GCODE_OFFSET|SET_GCODE_VARIABLE|SET_HEATER_TEMPERATURE|SET_IDLE_TIMEOUT|SET_INPUT_SHAPER|SET_KINEMATIC_POSITION|SET_LED|SET_LED_TEMPLATE|SET_PIN|SET_PRESSURE_ADVANCE|SET_RETRACTION|SET_SERVO|SET_SKEW|SET_SMART_EFFECTOR|SET_STEPPER_ENABLE|SET_TEMPERATURE_FAN_TARGET|SET_TMC_CURRENT|SET_TMC_FIELD|SET_VELOCITY_LIMIT|SHAPER_CALIBRATE|SKEW_PROFILE|STATUS|STEPPER_BUZZ|SYNC_EXTRUDER_MOTION|SYNC_STEPPER_TO_EXTRUDER|TEMPERATURE_WAIT|TEST_RESONANCES|TESTZ|TUNING_TOWER|TURN_OFF_HEATERS|UPDATE_DELAYED_GCODE|Z_ENDSTOP_CALIBRATE|Z_OFFSET_APPLY_ENDSTOP|Z_OFFSET_APPLY_PROBE|Z_TILT_ADJUST)\\\\s"},"gcode_extended_parameter":{"begin":"(?i)\\\\b(AC|ACCEL|ACCEL_TO_DECEL|AD|ADVANCE|ANGLE|AXIS|BAND|BD|BLUE|CARRIAGE|CHIP|CLEAR|COMMAND|COUNT|CURRENT|CYCLE_TIME|DAMPING_RATIO_X|DAMPING_RATIO_Y|DIRECTION|DISPLAY|DISTANCE|DURATION|E|ENABLE|ERROR|EXTRUDER|F|FACTOR|FIELD|FILENAME|FREQ_END|FREQ_START|GREEN|GROUP|HEATER|HOLDCURRENT|HZ_PER_SEC|ID|INDEX|INPUT_SHAPING|LED|LIFT_SPEED|LOAD|MACRO|MAX_SMOOTHING|max_speed|MAXIMUM|METHOD|min_speed|MINIMUM|MODE|MOTION_QUEUE|MOVE|MOVE_SPEED|MSG|NAME|OUTPUT|P|PARAMETER|PGP|PIN|PREFIX|PROBE_SPEED|PULLUP|RATE|RECOVERY_TIME|RED|REG|REMOVE|RETRACT_LENGTH|RETRACT_SPEED|S|SAMPLE_RETRACT_DIST|SAMPLES|SAMPLES_RESULT|SAMPLES_TOLERANCE|SAMPLES_TOLERANCE_RETRIES|SAVE|SENSITIVITY|SENSOR|SERVO|SET_POSITION|SHAPER_FREQ_X|SHAPER_FREQ_Y|SHAPER_TYPE|SHAPER_TYPE_X|SHAPER_TYPE_Y|SKIP|SMOOTH_TIME|SPEED|SQUARE_CORNER_VELOCITY|START|STEP_DELTA|STEP_HEIGHT|STEPPER|STOP_ON_ENDSTOP|SYNC|T|TARGET|temperature_fan|TEMPLATE|TIMEOUT|TRANSMIT|TYPE|UNRETRACT_EXTRA_LENGTH|UNRETRACT_SPEED|VAL|VALUE|VARIABLE|VELOCITY|WHITE|WIDTH|WRITE_FILE|X|X_ADJUST|XY|XZ|Y|Y_ADJUST|YZ|Z|Z_ADJUST)=","beginCaptures":{"1":{"name":"variable.parameter"}},"end":"\\\\s","patterns":[{"name":"constant.language","match":"(?i)(5V|average|command|echo|error|manual|median|OD|output_mode_store|pin_down|pin_up|reset|self_test|set_5V_output_mode|set_5V_output_mode|set_OD_output_mode|touch_mode)"},{"include":"#number"},{"include":"#gcode_macro_block"}]},"gcode_macro_block":{"name":"string.unquoted","begin":"{","end":"}"}},"scopeName":"source.klipper-config"}')}}]);