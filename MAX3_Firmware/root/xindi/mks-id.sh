#! /bin/bash

if [ -d "/dev/serial/by-id" ];then
	path=$(ls /dev/serial/by-id/*)
	# echo $path
	if [ -f "/home/mks/klipper_config/MKS_THR.cfg" ];then
		# SERIALLINE=`cat /home/mks/klipper_config/MKS_THR.cfg | grep -E 'serial'`
		# serial = ${SERIALLINE#*:}
		# echo ${serial}
		sed -i "s|serial:.*|serial:"${path}"|g" /home/mks/klipper_config/MKS_THR.cfg
	fi
fi

# 删除多余的printer-* 冗余文件
if [ -d "/home/mks/klipper_config" ];then
        rm /home/mks/klipper_config/printer-*.cfg -f
fi

