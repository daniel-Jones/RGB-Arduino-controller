#!/usr/bin/python

# comand line python RGB lED controller

import sys, serial;

if len(sys.argv) < 2:
	print("This program requires arguments.\nExample (using RGB color values): python " + sys.argv[0] + " 255,0,0\nThis example will turn your LEDS solid red.");
else:
	print("Sending to arduino: " + sys.argv[0]);
	ser = serial.Serial(0);  # open first serial port
	print(ser.portstr);       # check which port was really used
	ser.write(sys.argv[0]);      # write a string
	ser.close();             # close port
