<p align="center"><img src="other/QIDI.png" height="240" alt="QIDI's logo" /></p>
<p align="center"><a href="/LICENSE"><img alt="GPL-V3.0 License" src="other/qidi.svg"></a></p>

# Document Instructions
QIDI_Max3 is a server-side software that interacts with the screen in the Maxx3 model system. This document contains our source code, and we provide the safer solution to update it:Download the packaged file to a USB drive and insert it into the machine for updating.  
QIDI provides a packaged version file in the version bar next to it. Please download the compressed package file starting with MAX.  
We have provided multiple different versions of source code. Please select the branch you want to download, and the name of the branch is the corresponding version name.
## 4.3.6 Update content
1.Fixed an abnormal prompt bug that triggered material return detection during material return  
2.Add a screen rest function. If the machine is not operated on a non printing interface, it will enter a screen stop state after 5 minutes.  
3.Add a separate Z offset value function button.You can adjust the Z offset value before printing  
4.Optimize the file printing logic, now printing files through USB will cache them to disk space on the machine.  
5.Optimize the leveling logic, now the z-offset value will be saved instead of reset  
## Detailed update process
#### Packaged files
1. Prepare a blank named USB drive.Please ensure that the device name of the USB drive is empty

<p align="left"><img src="other/blankname.png" height="360" alt="sample"></p>

2. Select the latest version in the version release bar next to it, download the compressed file package starting with MAX and extract it locally.  
<a href="https://github.com/QIDITECH/QIDI_MAX3/releases/tag/Max3_V4.3.1/MAX3_V4.3.0.rar">Jump link </a>
3. Place the files in the USB drive, such as

<p align="left"><img src="other/sample.png" height="240" alt="sample"></p>

4. Insert the USB drive into the machine's USB interface, and an update prompt will appear on the version information interface. Click the update button to restart according to the prompt.




## Report Issues and Make Suggestions

***You can contact [After-Sales Service](https://qidi3d.com/pages/warranty-policy-after-sales-support) to report issues and make suggestions.***  
***You can directly contact our after-sales team for any issues related to machine mechanics, slicing software, firmware, and various machine issues. They will reply to your questions within twelve hours.***

## Others

Different from the usual method of directly accessing the fluid page through an IP address, the QIDI version sets the default port number to 10088, so you need to add `:10088` after the machine's IP to access the fluid page</br>
The 3D printers of QIDI are based on Klipper.On the basic of Klipper open source project, we have made some modifications to it's source code to meet some of the user's needs.At the same time, we have also made modifications to Moonraker, so that the screens we set can correspond to the operations on the page.
Thanks to the developers and maintainers of these open source projects.Please consider using or supporting these powerful projects.

 Software |  QIDI edition
 ----|----
**Klipper** | **[https://github.com/QIDITECH/klipper](https://github.com/QIDITECH/klipper)**
**Moonraker** | **[https://github.com/QIDITECH/moonrake](https://github.com/QIDITECH/moonrake)**









  
