# Manually compiling and flashing the firmware on electron

Need: Particle IDE, Particle CLI, USB Cable, electron

`cd ~/FOLDER_OF_CODE`
`particle compile electron main.ino --saveTo firmware.bin && particle flash --usb firmware.bin`

* assumes the filename of code is main.ino
* assumes you are compiling for electron
* assumes you are flashing the firmware over USB in DFU mode
