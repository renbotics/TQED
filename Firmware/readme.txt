Programming:
------------
avrdude -p t45 -P /dev/tty.usbserial-A700ejMH -b 9600 -c avrisp -U lfuse:w:0xe2:m -U hfuse:w:0xdf:m -U efuse:w:0xff:m
avrdude -p t45 -P /dev/tty.usbserial-A700ejMH -b 9600 -c avrisp -U flash:w:TinyQED.hex

Tips:
-----
Have to program using 9600; probably due to using 8mHz internal OSC
