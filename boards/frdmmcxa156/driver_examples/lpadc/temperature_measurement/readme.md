Overview
========

The lpadc_temperature_measurement example shows how to measure the temperature within the internal sensor.

In this example, the ADC input channel is mapped to an internal temperature sensor. When running the project, typing
any key into debug console would trigger the conversion. ADC watermark interrupt would be asserted once the number of
datawords stored in the ADC Result FIFO is greater than watermark value. In ADC ISR, the watermark flag would be
cleared by reading the conversion result value. When the conversion done, two valid result will be put in the FIFO,
then the temperature can be calculated within the two results and a specific formula. 

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
- FRDM-MCXA156 board
- Personal Computer

Board settings
==============

Prepare the Demo
================
1.  Connect a USB Type-C cable between the host PC and the MCU-Link USB port on the target board.
2.  Open a serial terminal with the following settings (See Appendix A in Getting started guide for description how to determine serial port number):
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
The log below shows the output of the temperature measurement example in the terminal window:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
LPADC Temperature Measurement Example
ADC Full Range: 65536
Please press any key to get temperature from the internal temperature sensor.
Current temperature: 29.342
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
