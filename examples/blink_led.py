#!/usr/bin/env python

import os
import sys

if not os.getegid() == 0:
    sys.exit('Script must be run as root')

from time import sleep
from OPi import gpio

led = gpio.IO11

gpio.init()
gpio.setcfg(led, gpio.OUTPUT)

try:
    print ("Press CTRL+C to exit")
    while True:
        gpio.output(led, 1)
        sleep(0.1)
        gpio.output(led, 0)
        sleep(0.1)

        gpio.output(led, 1)
        sleep(0.1)
        gpio.output(led, 0)
        sleep(0.1)

        sleep(0.5)

except KeyboardInterrupt:
    gpio.output(led, 0)
    print ("Bye.")
