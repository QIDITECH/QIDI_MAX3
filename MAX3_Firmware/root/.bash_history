sync
cd ..
ls
reboot 
systemctl status klipper
shutdown -P now
ls
systemctl status makerbase-client.service 
ls
cd xindi
cd build/
cat start.sh 
vim start.sh 
sync
ifconfig
sync
shutdown -P now
systemctl status makerbase-client.service 
systemctl stop makerbase-client.service 
ls
cd xindi
ls
cd build/
./xindi 
systemctl start makerbase-client.service 
systemctl status makerbase-client.service 
ls
cat start.sh 
vim /usr/lib/systemd/system/makerbase-client.service
sync
sync
shutdown -P now
ifconfig
systemctl status makerbase-client.service 
systemctl start makerbase-client.service 
systemctl start makerbase-client.service 
vim /usr/lib/systemd/system/makerbase-client.service 
sync
reboot 
shutdown -P now
ifconfig
sync
sync
shutdown -P now
ls
rm xindipro/ -rf
sync
shutdown -P now
sync
ls /dev/serial/by-id/usb-Klipper_rp2040_E598429446197258-if00 
sync
shutdown -P now
ls
sync
mkdir update
cd update/
ls
git clone https://gitee.com/kenneth_lin/xindi.git
sync
cd ~
ls
cd xindi/
ls
cd build/
ls
cp ~/update/xindi/build/xindi ./ -f
sync
ls
cd src/
cp ~/update/xindi/build/src/libsrc.a ./ -f
sync
cd ~
chmod 777 ./xindi -R
sync
sync
sync
shutdown -P now
sync
ls
ls
rm update/ -rf
sync
shutdown -P now
ifconfig
sync
ifconfig
ls
ifconfig
wpa_cli 
ifconfig
cat /etc/wpa_supplicant/wpa_supplicant-wlan0.conf 
ping www.baidu.com
ifconfig
wpa_cli 
cat /etc/wpa_supplicant/wpa_supplicant-wlan0.conf 
wpa_cli -v
wpa_supplicant -v
systemctl disable makerbase-net-mods.service 
sync
ifconfig
wpa_cli 
whereis wpa_cli
cd /usr/sbin/
ls
file wpa_cli 
wpa_cli 
ls
cd ~/xindi/
git status 
ls
ls
git pull
git pull
ls
cd build/
git pull
ls
cd ~
ls
rm xindi
rm xindi -rf
git clone https://gitee.com/kenneth_lin/xindi.git 
ls
cd xindi/
ls
cd build/
cmake ..
make -j2
./xindi 
systemctl restart makerbase-client.service 
cd ..
ls
cd MAKERBASE-AUTOMOUNT/
ls
make -j2
cd /home/
ls
cd mks/gcode_files/
ls
cd sda1/
;s
ls
cd QD_Update/
ls
touch QD_Plus_SOC
sync
cd ~
systemctl stop makerbase-client.service 
ls
cd xindi/
cd ..
ls
ls
cd xindi/
ls
ls
ls
bash builddeb.sh 
ls
ls
dpkg -b MKSDEB mks_20221210.deb
ls
ls
cp mks_20221210.deb ../ -f
sync
cd ..
ls
rm xindi/ -rf
sync
ls
rm xindi.tar.gz -rf
sync
dpkg -i mks_20221210.deb 
sync
shutdown -P now
ls
rm xindi/ -rf
git clone https://gitee.com/kenneth_lin/xindi.git
ls
cd xindi/
cd ..
systemctl restart makerbase-client.service 
ls
ifconfig
ls
cd xindi/
ls
cd build/
cmake ..
make -j2
ls
ls
./xindi 
ls
ls
cd xindi/
ls
git status 
bash builddeb.sh 
dpkg -i MKSDEB mks-20221210.deb 
dpkg -b MKSDEB mks-20221210.deb 
git status 
git add .
git status 
git commit -m "build: 202212101513"
git config --global user.email "makerbase@makerbase.com"
git config --global user.name "Makerbase"
git push origin master 
git commit -m "build: 202212101513"
git push origin master 
ls
cp mks-20221210.deb ../ -f
sync
cd ~
ls
rm xindi/ -rf
ifconfig
ls
dpkg -i mks-20221210.deb 
sync
systemctl restart makerbase-client.service 
ls
cd xindi/
top
systemctl restart makerbase-client.service 
ls
cd xindi/
ls
cd build/
ls
cat start.sh 
git status 
ls
cd ..
ls
cd ..
ls
ls
cd xindi/
git status 
ls
cd ../
ls
cd xindi/
ls
git status 
systemctl restart makerbase-client.service 
systemctl restart makerbase-client.service 
systemctl restart makerbase-client.service 
systemctl restart makerbase-client.service 
cd build/
./xindi 
./xindi 
./xindi 
./xindi 
./xindi 
./xindi 
./xindi 
./xindi 
systemctl restart makerbase-client.service 
ls
exit
exit
systemctl --no-reload armbian-resize-filesystem
systemctl --no-reload armbian-resize-filesystem
systemctl --no-reload enable armbian-resize-filesystem.service 
sync
ls
wget https://w1.fi/releases/wpa_supplicant-2.8.tar.gz 
tar -zvxf wpa_supplicant-2.8.tar.gz wpa_supplicant-2.8/
cd wpa_supplicant-2.8/
cd wpa_supplicant/
ls
cp defconfig .config
make 
apt install libdbus-1-dev 
make -j2
ls
./wpa_cli 
cd ~
ls
exit
exit
systemctl status makerbase-client.service 
history 
ls
systemctl --no-reload enable armbian-resize-filesystem.service 
shutdown -P now
ls
systemctl enable makerbase-net-mods.service 
ls
sync
systemctl status makerbase-client.service 
sync
shutdown -P now
ls
ifconfig
ifconfig
cd /boot/
ls
vim wpa_supplicant-wlan0.conf 
sync
ifconfig
systemctl enable makerbase-wlan0
ifconfig
ls
cat /etc/wpa_supplicant/wpa_supplicant-wlan0.conf 
vim wpa_supplicant-wlan0.conf 
sync
ifconfig
ls
rm wpa_supplicant-2.8 -rf
ls
ls
shutdown -P now
ls
cd xindi/
git pull
cd ..
mv xindi xindibak
git clone https://gitee.com/kenneth_lin/xindi.git
ls
cd xindi
ls
cd build/
git status 
cd ..
ls
cd ..
ls
tar -zvxf wpa_supplicant-2.8.tar.gz 
cd wpa_supplicant-2.8/
ls
cd wpa_supplicant/
git status 
make all
cp defconfig .config
make all -j2
install -m 0644 -D libwpa_client.so /usr/lib/libwpa_client.so
install -m 0644 -D libwpa_client.so //usr/lib//libwpa_client.so
make libwpa_client.so 
install -m 0644 -D libwpa_client.so /usr/lib/libwpa_client.so
install -m 0644 -D ../src/common/wpa_ctrl.h /usr/include/wpa_ctrl.h
sync
cd ~
ls
ls
cd xindi
ls
ls
ls
ls
ls
ls
ls
ls
ifconfig
git status 
cp mks-20221220.deb ~/ -f
cd ~
ls
rm xindibak/ -rf
rm xindi -rf
sync
dpkg -i mks-20221220.deb 
ls
dpkg -i mks-20221220.deb 
sync
ls
ls
cd /boot/
ls
vim wpa_supplicant-wlan0.conf 
sync
cd ~
systemctl restart makerbase-net-mods.service 
systemctl restart makerbase-wlan0.service 
dhcpcd wlan0
ifconfig
ifconfig
ls
ls
ls
cd xindi/
ls
cd ../..
cd ~
ls
ls
sync
sync
ls
cd xindi/
git pull
cd ..
mv xindi xindibak
git clone https://gitee.com/kenneth_lin/xindi.git
git clone https://gitee.com/kenneth_lin/xindi.git
cd xindi
ls
cd build/
cmake ..
make -j2
cd ~
git clone https://github.com/MS1987/STM32_HID_Bootloader.git
cd STM32_HID_Bootloader/
ls
ls
cd cli/
make 
ls
cp hid-flash ~/hid-flash
ls
cd ~
ls
ifconfig
ls
ls
cd xindi
git status 
git add .
ls
ls
cd ~
ls
cd xindi
git status 
git commit -m "feat: "
git push origin master 
ls
cd ~
ls
cd xindi
ls
bash ./builddeb.sh 
dpkg -b MKSDEB mks-221220.deb
cp mks-221220.deb ~/ -f
cd ..
ls
rm xindi -rf
rm xindibak -rf
dpkg -i mks-221220.deb 
sync
sync
sync
sync
sync
sync
ls
ls
ls
ls
cd xindi/
ls
cd ~
ls
shutdown -P now
ls
ls
exit
shutdown -P now
ifconfig
ls
rm mks-202212*
ls
rm wpa_supplicant-2.8
rm wpa_supplicant-2.8 -rf
sync
ls
dpkg -L makerbase-client 
systemctl disable makerbase-net-mods.service 
clear
cd xindi/
git pull
cd /boot/
clear
ls
rm wpa_supplicant-wlan0.conf -rf
sync
shutdown -P now
shutdown -P now
ls
dpkg -i mks-20230309.deb 
ls
cat /boot/wpa_supplicant-wlan0.conf 
cat /boot/wpa_supplicant-wlan0.conf 
cat /boot/wpa_supplicant-wlan0.conf 
systemctl status makerbase-net-mods.service 
clear
ls
rm mks_20221210.deb -rf
rm mks-2*
ls
cat config.mksini 
clear
clear
ls
rm wpa_supplicant-2.8.tar.gz -rf
clear
shutdown -P now
