sgi_led
=======

Set the LED on the front panel of SGI workstations (MIPS)


Usage
=====

```
setled <value>  turns the led on (1) or off (0). Only decimal 0 and 1 are valid
ledon           turns the led on
ledoff          turns the led off
```


LED
===

The LED is the bi-color power/fault LED. Normally this LED is green (or white lightbulbs on Octane/Octane2). During POST and shutdown the green light is turned off and a red (or amber) LED lights in it's place. This program lets you turn the red/amber light on as you please.

Note: There is no exposed way to turn the light off completely (even though this happens in the stand alone diagnostics.

A call to syssgi(SETLED, arg1); performs the magic.


Building
========

Build tested on an Octane2 with MipsPro 7.4.


Aknowledgement
==============

sgi_led is inspired by sgi-heartbeat by Tony 'Nicoya' Mantler
