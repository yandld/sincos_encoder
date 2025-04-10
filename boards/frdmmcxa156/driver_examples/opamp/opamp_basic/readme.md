Overview
========

The OPAMP basic example demonstrates how to use the OPAMP driver. In this example, the OPAMP works in the internal gain mode,
connect the positive terminal of the OPAMP to the external input source. The OPAMP output is 2X of the external input voltage.
When the input voltage changes, the OPAMP output changes accordingly.

SDK version
===========
- Version: 2.16.000

Toolchain supported
===================
- IAR embedded Workbench  9.60.1
- Keil MDK  5.39.0
- GCC ARM Embedded  13.2.1
- MCUXpresso  11.10.0

Hardware requirements
=====================
- Type-C USB cable
- FRDM-MCXA156 Board
- Personal Computer

Board settings
==============
Positive input channel J2-12(P2_12).
OPAMP output pin: J8-5(P2_15).
Negative input channel R60-3(OPAMP0_INN) connects to GND.

Prepare the Demo
================
1.  Connect a micro USB cable between the PC host and the MCU-Link USB port on the board
2.  Open a serial terminal with the following settings (See Appendix A in Getting started guide for the description of how to determine serial port number):
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One-stop bit
    - No flow control
3.  Download the program to the target board.
4.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
OPAMP BASIC EXAMPLE!


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
OPAMP output voltage, ranging 0-3.3v, is about twice the input voltage. 
