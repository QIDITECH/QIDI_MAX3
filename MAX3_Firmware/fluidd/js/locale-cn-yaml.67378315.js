(globalThis["webpackChunkfluidd"]=globalThis["webpackChunkfluidd"]||[]).push([[372],{44494:e=>{e.exports={app:{bedmesh:{label:{box_scale:"显示比例",flat_surface:"显示参考平面",mesh_matrix:"网格矩阵",probed_matrix:"探测点矩阵",profile_name:"配置文件",remove_profile:"删除 %{name} 配置文件",scale:"显示偏差值",wireframe:"显示网格线"},msg:{hint:"如果将 %{name} 另存, 你也可以选择删除此 %{name} 配置",not_found:"热床网格配置不存在",not_loaded:"没有加载热床网格配置"},tooltip:{calibrate:"开始校准，该校准信息会默认保存为 defalut",delete:"删除配置。该操作将会重启你的打印机",load:"加载配置",save:"将校准的配置文件应用于 printer.cfg。该操作将会重启你的打印机"}},chart:{label:{current:"当前值",item:"名称",off:"关闭图表",on:"开启图表",power:"功率",rate_of_change:"变化值",target:"目标值"},tooltip:{help:"按住 Shift 键可缩放图表。<br />单击一个项目名称或功率可在图表中切换显示。"}},console:{label:{auto_scroll:"自动滚动",flip_layout:"翻转布局",hide_temp_waits:"隐藏温度信息"},placeholder:{command:"按 'tab' 自动补全命令，按 '↑↓' 键获取历史命令，输入 'help' 获取命令帮助",scroll:"滚动至底部"}},endpoint:{error:{cant_connect:"出了点问题，Fluidd 无法连接目标。你确定这是正确的设备地址？",cors_error:"被 CORS 政策阻止，请查看 Moonraker 帮助",cors_note:'这可能意味着您需要修改 Moonraker 配置。请参阅有关多打印机设置的<a href=\\"%{url}\\" target=\\"_blank\\">文档</a>'},hint:{add_printer:"例如：http://fluiddpi.local"},msg:{trouble:'遇到麻烦？<a href="%{url}" target="_blank">点击此处</a> 查看更多信息。'},tooltip:{endpoint_examples:"输入您的 Moonraker API 地址。<br />例如：<br/><blockquote>http://fluidd.local, http://192.168.1.150</blockquote>"}},endstop:{label:{open:"未触发",triggered:"已触发"},msg:{subtitle:"使用“刷新”按钮更新限位开关状态。"}},file_system:{filters:{label:{print_start_time:"隐藏已打印项目",print_start_time_desc:"隐藏已经打印的项目文件"}},label:{dir_name:"目录名称",disk_usage:"磁盘使用率",diskinfo:"磁盘信息",downloaded:"下载完成",file_name:"文件名",transfer_rate:"传输速率",uploaded:"上传完成"},msg:{confirm:"你确定需要这样操作吗？这将删除选中的文件和目录。",not_found:"文件未找到",processing:"处理中..."},overlay:{label:"<strong>拖动</strong> 一个文件到这里"},title:{add_dir:"新建目录",add_file:"新建文件",download_file:"下载文件",rename_dir:"重命名目录",rename_file:"重命名文件",upload_file:"上传文件"},tooltip:{low_on_space:"磁盘空间不足",root_disabled:"{root} G代码文件目录不可用，请首先连接打印机或者检查G代码存放目录的路径与读权限"},url:{klipper_config:"https://www.klipper3d.org/zh/Config_Reference.html#%{hash}"}},gcode:{btn:{load_current_file:"载入当前文件"},label:{current_layer_height:"当前层高",follow_progress:"跟随打印进度",layer:"当前层数",layers:"总层数",parsed:"已解析",show_extrusions:"显示已打印部分",show_moves:"显示移动走线",show_next_layer:"显示下一层",show_previous_layer:"显示上一层",show_retractions:"显示回抽",parsing_file:"解析文件"},msg:{confirm:'文件 "%{filename}" 大小为 %{size}，这可能会导致系统短暂失去响应，是否确认？'}},general:{btn:{add:"添加",add_dir:"新建目录",add_file:"新建文件",add_printer:"添加打印机",adjust_layout:"调整仪表板布局",all:"全部",calibrate:"校准",cancel:"取消",clear_profile:"清除配置文件",close:"关闭",config_reference:"配置参考",download:"下载",edit:"编辑",exit_layout:"退出修改模式",extrude:"挤出",heaters_off:"停止加热",load_all:"全部加载",more_information:"更多信息",pause:"暂停",preheat:"预热",presets:"预设",preview_gcode:"预览 Gcode",quad_gantry_level:"龙门架调平",reboot:"重启",refresh:"刷新",remove:"删除",remove_all:"删除全部",rename:"重命名",reprint:"重新打印",reset_file:"重置文件",reset_layout:"重置布局",reset_stats:"重置统计信息",restart_firmware:"重启Firmware",restart_service:"重启 %{service}",restart_service_klipper:"重启Klipper",restart_service_moonraker:"重启Moonraker",resume:"恢复",retract:"回抽",save:"保存",save_as:"另存为",save_restart:"保存并重启",send:"发送",set_color:"设置颜色",shutdown:"关闭",socket_reconnect:"重新连接",socket_refresh:"强制刷新",upload:"上传",upload_print:"上传并打印",view:"查看"},error:{app_setup_link:'如需查看 Fluidd 详细配置规则，请点击<a target="_blank" href="%{url}">此处</a>。',app_warnings_found:"％{appName} 出现警告",components_config:'如需查看 Moonraker 详细配置规则，请点击<a target="_blank" href="%{url}">此处</a>。',failed_components:"Moonraker 插件启用失败，请检查您的日志，更新您的配置并重新启动 Moonraker。"},label:{accel_to_decel:"加速到减速度",acceleration:"加速度",actual_time:"实际剩余",add_camera:"添加摄像头",add_filter:"添加过滤",add_preset:"添加预设",add_user:"添加用户",alias:"别名",api_key:"API 密钥",api_url:"Moonraker 服务器地址",apply_z_offset:"应用并保存Z轴偏移量",category:"分类",change_password:"更改密码",clear_all:"全部清除",color:"颜色",confirm:"确认",current_password:"当前密码",disabled_while_printing:"打印时禁用",edit_camera:"编辑摄像头设置",edit_filter:"编辑过滤器",edit_preset:"编辑预设",edit_user:"编辑用户",extrude_length:"挤出距离",extrude_speed:"挤出速度",filament:"已用耗材",file:"文件名称",finish_time:"完成时间",flow:"挤出流量",free:"可用",heaters_busy:"打印机正忙。关闭热端有可能会导致打印失败。",high:"最高温度",host:"主机",layer:"层数",layout:"布局",longest_job:"单次耗时最长",low:"最低温度",m117:"M117",name:"名称",new_password:"新密码",no_notifications:"暂无通知",off:"关闭",on:"开启",password:"密码",power:"设备",pressure_advance:"压力补偿",printers:"打印机列表",progress:"当前层进度",requested_speed:"请求速度",retract_length:"回抽距离",retract_speed:"回抽速度",save_as:"另存为",services:"服务",slicer:"切片剩余",smooth_time:"平滑时间",speed:"移动速度",sqv:"转角速度",total:"已用时间",total_filament:"总消耗耗材",total_filament_avg:"平均消耗耗材",total_jobs:"总任务次数",total_print_time:"总打印时间",total_print_time_avg:"平均打印时间",total_time:"总时间",total_time_avg:"平均时间",uncategorized:"未分类",unretract_extra_length:"回抽额外装填量",unretract_speed:"回抽装填速度",unsaved_changes:"未保存的修改",used:"已用",variance:"偏差值",velocity:"速度",visible:"可见性",z_offset:"Z轴偏移",edit_category:"编辑分类",add_category:"添加分类",file_time:"预计剩余"},msg:{password_changed:"密码已更改",wrong_password:"密码错误"},simple_form:{error:{arrayofnums:"仅允许输入数字",exists:"用户已存在",invalid_expression:"无效表达",invalid_number:"无效数字",invalid_url:"无效的URL地址",max:"最大 %{max}",min:"长度最小%{min}位",min_or_0:"最小 %{min} 或 0",password_username:"用户名密码不匹配",required:"必填"},msg:{apply_z_offset_endstop:"Z轴限位偏移将以当前Z轴偏移量的基础上进行计算并更新",apply_z_offset_probe:"自动调平的Z轴偏移量将以当前Z轴偏移量的基础上进行计算并更新",confirm:"是否确认？",confirm_power_device_toggle:"这会切换设备开关状态！是否确认？",confirm_reboot_host:"这会重启您的系统！是否确认？",confirm_service_restart:"你确定要重启 %{name} 服务吗?",confirm_service_stop:"你确定要停止 %{name} 服务吗?",confirm_shutdown_host:"这会关闭您的系统！是否确认？",unsaved_changes:"这会丢失未保存的更改！是否确认？"}},table:{header:{actions:"展开",end_time:"结束时间",estimated_time:"预计时间",filament:"预计使用耗材",filament_used:"实际使用耗材",filament_weight_total:"耗材重量",first_layer_bed_temp:"起始层热床温度",first_layer_extr_temp:"起始层挤出温度",first_layer_height:"起始层高",height:"模型高度",last_printed:"上次打印时间",layer_height:"层高",modified:"修改时间",name:"名称",print_duration:"打印时间",size:"文件大小",slicer:"切片软件",slicer_version:"软件版本",start_time:"开始时间",status:"状态",total_duration:"总耗时"}},title:{add_printer:"添加打印机",bedmesh:"热床网格补偿",bedmesh_controls:"热床网格控制",camera:"摄像头",config_files:"配置文件",configure:"配置",console:"控制台",endstops:"限位开关",fans_outputs:"风扇和输出",gcode_preview:"Gcode 预览",history:"任务历史",home:"仪表板",jobs:"任务列表",limits:"打印机限制",macros:"宏",other_files:"其他文件（日志、文档及参考配置）",retract:"固件回抽",runout_sensors:"断料检测传感器",settings:"设置",stats:"打印任务统计",system:"系统",system_overview:"系统信息",temperature:"温度",tool:"移动控制",tune:"调整"},tooltip:{estop:"紧急停止",reload_klipper:"重新载入 Klipper 配置文件",reload_restart_klipper:"重新载入 Klipper 配置并重启 MCU",restart_klipper:"重启 Klipper 服务"}},history:{msg:{confirm_jobs:"这会清除任务历史信息！是否确认？",confirm_stats:"这会清除状态统计信息！是否确认？"}},printer:{state:{busy:"处理中",complete:"完成",idle:"空闲",loading:"加载中",paused:"已暂停",printing:"打印中",ready:"就绪",standby:"待机",cancelled:"已取消"}},setting:{btn:{add_camera:"添加摄像头",add_category:"添加分类",add_filter:"添加过滤器",add_thermal_preset:"添加预设",add_user:"添加用户",reset:"重置",select_theme:"选择颜色"},camera_rotate_options:{90:"90度",180:"180度",270:"270度",none:"不旋转"},camera_type_options:{iframe:"HTTP 页面",mjpegadaptive:"MJPEG 自适应",mjpegstream:"MJPEG 视频流",video:"IP 摄像头"},label:{all_off:"全部禁用",all_on:"全部启用",auto_edit_extensions:"自动进入编辑模式的文件类型",camera_flip_x:"水平翻转",camera_flip_y:"垂直翻转",camera_rotate_by:"旋转角度",camera_stream_type:"视频流类型",camera_url:"摄像头地址",confirm_dirty_editor_close:"编辑器有未保存的更改时需要确认",confirm_on_estop:"紧急停止时是否需要确认",confirm_on_power_device_change:"改变设备开关状态时需要确认",contains:"包含字符",dark_mode:"深色模式",date_time_format:"日期和时间格式",default_extrude_length:"默认挤出距离",default_extrude_speed:"默认挤出速度",default_toolhead_move_length:"默认打印头移动距离",default_toolhead_xy_speed:"默认 XY 轴移动速度",default_toolhead_z_speed:"默认 Z 轴移动速度",draw_background:"显示背景",enable:"启用",enable_notifications:"更新通知",expression:"表达式",extrusion_line_width:"挤出线宽",filter:"过滤器列表",flip_horizontal:"水平翻转",flip_vertical:"垂直翻转",fps_idle_target:"未对焦时 FPS",fps_target:"FPS",gcode_coords:"使用 GCode 坐标",group_lower_layers:"下层分组",height:"高度",invert_x_control:"反转X轴控制",invert_y_control:"反转Y轴控制",invert_z_control:"反转Z轴控制",language:"显示语言",move_line_width:"移动线宽",primary_color:"主色调",printer_name:"打印机名称",reset:"重置设定",retraction_icon_size:"回抽图标大小",show_animations:"显示动画",show_rate_of_change:"显示温度变化值",starts_with:"起始字符",theme_preset:"预设主题",thermal_preset_gcode:"GCode",thermal_preset_name:"预设名称",toolhead_move_distances:"挤出头移动距离预设值",type:"类型",z_adjust_values:"Z轴偏移量"},timer_options:{duration:"仅显示已用时间",filament:"通过耗材用量估算",file:"通过文件进度估算",slicer:"使用切片文件的时间"},title:{authentication:"安全认证",camera:"摄像头",console:"控制台",file_editor:"文本编辑器",gcode_preview:"GCode 预览",general:"常规",macros:"宏",theme:"主题",thermal_presets:"温度预设",tool:"移动控制"},tooltip:{gcode_coords:"使用 GCode 坐标位置而不是仪表板上的打印头坐标位置"}},socket:{msg:{connecting:"正在连接至 Moonraker ...",no_connection:"没有连接 Moonraker。请检查 Moonraker 的状态和/或刷新以重试。"}},system_info:{label:{capacity:"容量",cpu_desc:"CPU",distribution_codename:"开发代号",distribution_like:"基于发行版",distribution_name:"发行版",hardware_desc:"硬件描述",hostname:"主机名",klipper_load:"Klipper 负载",manufactured:"生产日期",manufacturer:"制造商",mcu_awake:"{mcu} 唤醒时间",mcu_bandwidth:"{mcu} 带宽占用",mcu_load:"{mcu} 负载",model:"型号",moonraker_load:"Moonraker 负载",processor_desc:"处理器描述",product_name:"产品名称",serial_number:"序列号",system_load:"系统负载",system_memory:"系统内存",system_utilization:"系统利用率",total_memory:"内存"}},tool:{btn:{home_x:"归位 X",home_y:"归位 Y",home_all:"全部归位"},tooltip:{extruder_disabled:"挤出机操作已被禁用，低于 min_extrude_temp 设置的最低温度 (%{min}<small>°C</small>)",home_xy:"归位 XY",home_z:"归位 Z",motors_off:"关闭电机",bed_screws_adjust:"手动调平螺丝",quad_gantry_level:"龙门架调平",screws_tilt_calculate:"辅助调平螺丝",z_tilt_adjust:"Z轴倾斜调整"}},version:{btn:{check_for_updates:"检查更新",finish:"完成",update:"更新",view_versions:"查看版本"},label:{commit_history:"提交历史",commits_on:"提交于",committed:"提交完成",dirty:"污染",invalid:"无效",os_packages:"系统组件",package_list:"软件包列表",up_to_date:"最新",updates_available:"有可用更新"},status:{finished:"更新已完成",updating:"正在更新..."},title:"软件更新",tooltip:{commit_history:"提交历史",dirty:"本地文件被污染，无法从线上的 git 库进行更新",invalid:"本地文件无效，无法从线上的 git 库进行更新",packages:"软件包",release_notes:"发行说明"}}}}}}]);
//# sourceMappingURL=locale-cn-yaml.67378315.js.map