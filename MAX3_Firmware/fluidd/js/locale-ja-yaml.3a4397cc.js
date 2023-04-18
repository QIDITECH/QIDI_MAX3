(globalThis["webpackChunkfluidd"]=globalThis["webpackChunkfluidd"]||[]).push([[801],{64501:e=>{e.exports={app:{bedmesh:{label:{box_scale:"ボックススケール",flat_surface:"平面を表示する",mesh_matrix:"メッシュマトリックス",probed_matrix:"プローブマトリックス",profile_name:"プロフィール名",remove_profile:"%{name} プロファイルを削除",scale:"カラースケール",wireframe:"ワイヤーフレーム"},msg:{hint:" %{name}以外のものとして保存する場合は、 %{name} プロファイルも削除することを選択できます.",not_found:"既存のベッドメッシュは見つかりませんでした。",not_loaded:"メッシュを読込しない"},tooltip:{calibrate:"新しいキャリブレーションを開始し、プロファイル'default'として保存します",delete:"プロファイルを削除します。これにより、プリンタが再起動します",load:"プロファイルを読込み",save:"キャリブレーションされたプロファイルをprinter.cfgに書込みします。これにより、プリンタが再起動します"}},chart:{label:{current:"温度",item:"名称",off:"チャートオフ",on:"チャートオン",power:"電源",rate_of_change:"変更",target:"ターゲット温度"},tooltip:{help:"シフトを押したままズームします。<br />項目をクリックするとグラフが切り替わります。<br />電源をクリックすると、グラフが切り替わります。"}},console:{label:{auto_scroll:"オートスクロール",flip_layout:"レイアウト上下変更",hide_temp_waits:"待機中を隠す"},placeholder:{command:"タブでオートコンプリート、helpと入力でコマンド一覧表示 矢印で履歴ーを表示",scroll:"下にスクロール"}},endpoint:{error:{cant_connect:"何か問題が発生し、fluiddがアドレスに接続できません。このアドレスで間違いないですか？",cors_error:"CORSポリシーでブロックされました。",cors_note:'この場合、moonrakerの設定を変更する必要がある場合があります。マルチプリンター設定に関するドキュメントをご覧ください <a href="%{url}" target="_blank">こちら</a>。'},hint:{add_printer:"例）http://fluiddpi.local"},msg:{trouble:'お困りですか？ <a href="%{url}" target="_blank">詳細はこちら</a> をご覧ください。'},tooltip:{endpoint_examples:"API URLを入力してください。<br />例としては、<blockquote>fluidd.local, https://192.168.1.150</blockquote><br />があります。"}},endstop:{label:{open:"オープン",triggered:"トリガー"},msg:{subtitle:"エンドストップの状態を更新する場合は、更新ボタンを押します。"}},file_system:{filters:{label:{print_start_time:"印刷済みを隠す",print_start_time_desc:"すでに印刷したものをフィルタリングします。"}},label:{dir_name:"ディレクトリ名",disk_usage:"ディスク使用量",diskinfo:"ディスク情報",downloaded:"ダウンロード",file_name:"ファイル名",transfer_rate:"転送速度",uploaded:"アップロード"},msg:{confirm:"すべてのファイルとフォルダーが削除されます。よろしいですか？",not_found:"ファイルが見つかりません",processing:"プロセッシング"},overlay:{label:"<strong>ドラッグ</strong> ファイルをここに置く"},title:{add_dir:"ディレクトリの追加",add_file:"ファイルの追加",download_file:"ファイルの取得",rename_dir:"ディレクトリの名変更",rename_file:"ファイル名変更",upload_file:"ファイルをアップロードする｜ファイルをアップロードする"},tooltip:{low_on_space:"ディスク容量が少なくなりました。",root_disabled:"{root} rootは使用できません。ログを確認してください。"}},gcode:{btn:{load_current_file:"現在のファイルを読み込む"},label:{current_layer_height:"現在のレイヤーの高さ",follow_progress:"進捗状況を確認する",layer:"レイヤー",layers:"レイヤー",parsed:"解析済み",show_extrusions:"押し出しを表示",show_moves:"軌跡を表示",show_next_layer:"次のレイヤーを表示",show_previous_layer:"前のレイヤーを表示",show_retractions:"リトラクションの表示"},msg:{confirm:'"%{filename}"は %{size}です。これは、システムにとってリソースを大量に消費する可能性があります。よろしいですか？'}},general:{btn:{add:"追加",add_dir:"ディレクトリを追加",add_file:"ファイルを追加",add_printer:"プリンターを追加",adjust_layout:"ダッシュボードのレイアウトを調整する",all:"すべて",calibrate:"調整する",cancel:"キャンセル",clear_profile:"プロファイルをクリア",close:"閉じる",config_reference:"Configリファレンス",download:"ダウンロード",edit:"編集",exit_layout:"レイアウトモードを終了する",extrude:"押し出し",heaters_off:"ヒーターオフ",load_all:"すべて読み込み",more_information:"詳細はこちら",pause:"一時停止",preheat:"プレヒート",presets:"プリセット",preview_gcode:"Gコードをプレビュー",quad_gantry_level:"QGL",reboot:"再起動",refresh:"リフレッシュ",remove:"削除",remove_all:"すべて削除",rename:"名前の変更",reprint:"再印刷",reset_file:"クリアファイル",reset_layout:"レイアウトをリセット",reset_stats:"統計情報をリセット",restart_firmware:"ファームウェアの再起動",restart_service:" %{service}の再スタート",restart_service_klipper:"Klipperを再起動する",restart_service_moonraker:"Moonrakerを再起動する",resume:"再始動",retract:"リトラクト",save:"保存",save_as:"名前を付けて保存",save_restart:"保存と再起動",send:"送信",set_color:"セットカラー",shutdown:"シャットダウン",socket_reconnect:"再接続",socket_refresh:"強制リフレッシュ",upload:"アップロード",upload_print:"アップロード＆プリント",view:"ビュー"},error:{app_setup_link:'Fluiddのセットアップ要件はこちら <a target="_blank" href="%{url}">をご覧ください。</a>',app_warnings_found:"%{appName} の警告が見つかりました。",components_config:'Moonrakerのプラグイン設定は、こちら <a target="_blank" href="%{url}">です。</a>',failed_components:"Moonrakerはプラグインに失敗しています。ログを確認し、設定を更新して、moonrakerを再起動してください。"},label:{accel_to_decel:"加減速",acceleration:"加速度",actual_time:"実際の",add_camera:"カメラ追加",add_filter:"フィルターの追加",add_preset:"プリセット追加",add_user:"ユーザーの追加",alias:"エイリアス",api_key:"APIキー",api_url:"API URL",apply_z_offset:"Z_Offsetの適用と保存",category:"カテゴリー",change_password:"パスワードの変更",clear_all:"すべてクリア",color:"カラー",confirm:"確認",current_password:"現在のパスワード",disabled_while_printing:"印刷中は無効",edit_camera:"カメラの編集",edit_filter:"フィルターの編集",edit_preset:"プリセットの編集",edit_user:"ユーザーの編集",extrude_length:"押し出し長さ",extrude_speed:"押し出し速度",filament:"フィラメント",file:"ファイル",finish_time:"終了",flow:"フロー",free:"フリー",heaters_busy:"現在、プリンターは印刷中です。ヒーターを切ると、印刷に失敗することがあります。",high:"高",host:"ホスト",layer:"レイヤー",layout:"レイアウト",longest_job:"長い印刷",low:"低い",m117:"M117",name:"名前",new_password:"新しいパスワード",no_notifications:"通知なし",off:"オフ",on:"オン",password:"パスワード",power:"電源",printers:"プリンター",progress:"進捗",requested_speed:"スピード",retract_length:"リトラクト長",retract_speed:"リトラクト速度",save_as:"名前を付けて保存",services:"サービス",slicer:"スライサー",speed:"スピード",sqv:"正方形角速度",total:"合計",total_filament:"フィラメント総使用量",total_filament_avg:"プリントあたりの平均値",total_jobs:"印刷ジョブの総数",total_print_time:"総印刷時間",total_print_time_avg:"プリントあたりの平均値",total_time:"合計時間",total_time_avg:"プリントあたりの平均値",uncategorized:"未分類",unretract_extra_length:"アンリトラクト長さ",unretract_speed:"アンリトラクトスピード",unsaved_changes:"保存されていない変更",used:"used",variance:"増減率",velocity:"速度",visible:"見える",z_offset:"Zオフセット"},msg:{password_changed:"パスワードの変更",wrong_password:"おっと、何か問題が発生したようですよ。パスワードは正しいですか？"},simple_form:{error:{arrayofnums:"数字のみ",exists:"すでに存在する",invalid_expression:"無効な表現",invalid_url:"無効なURL",max:"最大 %{max}",min:"最小 %{min}",min_or_0:"最小 %{min} または0",password_username:"ユーザー名と一致しません",required:"必須"},msg:{apply_z_offset_endstop:"Endstop のZ-Offsetは、現在のZ-Offsetから計算され、更新されます。",apply_z_offset_probe:"Probe/Bltouch Zオフセットは、現在のZオフセットから計算され、更新されます。",confirm:"よろしいですか？",confirm_power_device_toggle:"このデバイスの電源が切り替わります。よろしいですか？",confirm_reboot_host:"ホストシステムが再起動されます。よろしいですか？",confirm_service_restart:"%{name} サービスを再起動してよろしいですか？",confirm_service_stop:" %{name} サービスを停止してよろしいですか？",confirm_shutdown_host:"ホストシステムをシャットダウンしてよろしいですか？",unsaved_changes:"未保存の変更があります。本当にこのファイルを閉じますか？"}},table:{header:{actions:"アクション",end_time:"終了",estimated_time:"予定時間",filament:"フィラメント",filament_used:"使用フィラメント",filament_weight_total:"フィラメント重量",first_layer_bed_temp:"１層目ベッド温度",first_layer_extr_temp:"１層目ホットエンド温度",first_layer_height:"1層目の高さ",height:"高さ",last_printed:"前回の印刷",layer_height:"レイヤーの高さ",modified:"モディファイド",name:"名前",print_duration:"プリント期間",size:"サイズ",slicer:"スライサー",slicer_version:"スライサーバージョン",start_time:"スタート",status:"状態",total_duration:"合計期間"}},title:{add_printer:"プリンターの追加",bedmesh:"ベッドメッシュ",bedmesh_controls:"ベッドメッシュコントロール",camera:"カメラ｜カメラ",config_files:"Configurationファイル",configure:"Configuration",console:"コンソール",endstops:"エンドストップ",fans_outputs:"ファン＆出力",gcode_preview:"Gcode Preview",history:"履歴",home:"ホーム",jobs:"印刷ジョブ",limits:"プリンター制限",macros:"マクロ",other_files:"その他のファイル",retract:"Firmwareを戻す",runout_sensors:"フィラメント断線センサー",settings:"設定",stats:"プリンター統計",system:"システム",system_overview:"システム情報",temperature:"サーマル",tool:"ツール",tune:"チューン"},tooltip:{estop:"緊急停止",reload_klipper:"klipper の設定を再読み込みする。",reload_restart_klipper:"クリッパーのコンフィギュレーションを再読み込みし、MCUを再起動します。",restart_klipper:"klipperのシステムサービスを再起動します。"}},history:{msg:{confirm_jobs:"すべてのジョブがクリアされます。よろしいですか？",confirm_stats:"すべての統計情報がクリアされます。よろしいですか？"}},printer:{state:{busy:"印刷中",cancelled:"キャンセル",complete:"完成",idle:"アイドル",loading:"ローディング",paused:"一時停止",printing:"印刷中",ready:"準備完了",standby:"スタンバイ"}},setting:{btn:{add_camera:"カメラを追加",add_category:"カテゴリを追加",add_filter:"フィルターの追加",add_thermal_preset:"プリセット追加",add_user:"ユーザーの追加",reset:"リセット",select_theme:"テーマ選択"},camera_rotate_options:{90:"90°",180:"180°",270:"270°",none:"なし"},camera_type_options:{iframe:"HTTPページ",mjpegadaptive:"MJPEG Adaptive",mjpegstream:"MJPEG Stream",video:"IP Camera"},label:{all_off:"すべてオフ",all_on:"すべてオン",auto_edit_extensions:"拡張機能を編集モードで自動的に開く",camera_flip_x:"水平方向に反転させる",camera_flip_y:"縦方向に反転させる",camera_rotate_by:"回転させる",camera_stream_type:"ストリームタイプ",camera_url:"カメラURL",confirm_dirty_editor_close:"保存されていない変更内容でエディタを閉じる場合、確認を表示する。",confirm_on_estop:"緊急停止時の確認を表示する。",confirm_on_power_device_change:"デバイスの電源変更時に確認を表示する。",contains:"内容",dark_mode:"ダークモード",date_time_format:"日付と時刻の表示方法",default_extrude_length:"デフォルトの押し出し長さ",default_extrude_speed:"デフォルトの押し出し速度",default_toolhead_move_length:"ツールヘッド移動長の初期設定",default_toolhead_xy_speed:"デフォルトのツールヘッドXY速度",default_toolhead_z_speed:"デフォルトのツールヘッドZ速度",draw_background:"背景を描く",enable:"有効化",enable_notifications:"通知を有効にする",expression:"表現方法",extrusion_line_width:"押し出し線幅",filter:"フィルター｜フィルター",flip_horizontal:"水平フリップ",flip_vertical:"縦型フリップ",fps_idle_target:"非フォーカス時のターゲットFPS ",fps_target:"FPSターゲット",gcode_coords:"GCode座標を使用する",group_lower_layers:"グループ下位層",height:"高さ",invert_x_control:"Xコントロールを反転",invert_y_control:"Yコントロールを反転",invert_z_control:"Zコントロールを反転",language:"表示言語",move_line_width:"線幅の移動",primary_color:"現在の色",printer_name:"プリンター名",reset:"設定をリセット",retraction_icon_size:"引き込みアイコンのサイズ",show_animations:"アニメーションを表示する",show_rate_of_change:"温度変化率を表示する",starts_with:"Starts with",theme_preset:"コミュニティプリセット",thermal_preset_gcode:"GCode",thermal_preset_name:"プリセット名",type:"タイプ",z_adjust_values:"Z値を調整します"},timer_options:{duration:"期間のみ",filament:"フィラメント推定",file:"ファイル推定",slicer:"スライサー"},title:{authentication:"認証",camera:"カメラ｜カメラ",console:"コンソール",file_editor:"ファイルエディタ",gcode_preview:"Gコードプレビュー",general:"全般",macros:"マクロ",theme:"テーマ",thermal_presets:"サーマルプリセット",tool:"Tool"},tooltip:{gcode_coords:"ダッシュボードのツールヘッド位置の代わりにGCode位置を使用する"}},socket:{msg:{connecting:"moonrakerに接続しています...",no_connection:"moonraker接続はありません。moonrakerのステータスを確認するか、更新してください。"}},system_info:{label:{capacity:"容量",cpu_desc:"CPUの説明",distribution_codename:"コード名",distribution_like:"ディストリビューションライク",distribution_name:"ディストリビューション",hardware_desc:"ハードウェアの説明",hostname:"ホスト名",klipper_load:"Klipper 稼働状況",manufactured:"製造日",manufacturer:"メーカー",mcu_awake:"{mcu} アウェイクタイム",mcu_bandwidth:"{mcu} 帯域幅",mcu_load:"{mcu} 稼働状況",model:"CPUモデル",moonraker_load:"Moonraker稼働状況",processor_desc:"プロセッサー",product_name:"商品名",serial_number:"シリアルナンバー",system_load:"システム負荷",system_memory:"システムメモリ",system_utilization:"システム使用率",total_memory:"総メモリ"}},tool:{btn:{home_x:"X",home_y:"Y"},tooltip:{extruder_disabled:"最小温度未満（%{min}<small>°C</small>）のためホットエンドが無効です。",home_xy:"Home XY",home_z:"Home Z"}},version:{btn:{check_for_updates:"アップデートを確認",finish:"終了",update:"アップデート",view_versions:"バージョンを表示"},label:{commit_history:"書込み履歴",commits_on:"書込みする",committed:"書込みする",dirty:"ダーティー",invalid:"無効",os_packages:"OSパッケージ",package_list:"パッケージリスト",up_to_date:"最新の状態",updates_available:"アップデートが利用可能です"},status:{finished:"アップデートが終了しました",updating:"アップデート中..."},title:"ソフトウェアのアップデート",tooltip:{commit_history:"コミット履歴",dirty:"マスター上または無効な原点ではなく、分離したヘッドを示します",invalid:"リポジトリへのローカル変更を示します",packages:"パッケージ",release_notes:"リリースノート"}}}}}}]);
//# sourceMappingURL=locale-ja-yaml.3a4397cc.js.map