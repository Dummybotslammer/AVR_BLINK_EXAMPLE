avrdude -C "D:\Projects_Documents\AVR\AVR_DEV\config\avrdude.conf" -v -p atmega328p -c arduino -P COM7 -b 19200 -F -V -U flash:w:"blinker.hex":i
pause