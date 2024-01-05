# Test Bench for Anto

The aim of this project is to have a basic reference Platform.IO project to start using the test bench. The device that we are testing on is a ESP32 board with a Relay from AliExpress


The board features a:
* Relay, GPIO 16
* Switch, GPIO 0
* LED, GPIO 23

That can be controlled via the Microcontroller. Other features include that it can be powered via MicroUSB connection (5 volts) or via a generic power supply with a range between 7-70 Volts DC. 

In order to pogram the device, you need to use a Serial-to-USB converter that is connected to the "Burn" header. Please make sure that:
* 5 Volts is connected and enabled on the serial-to-usb connector via the jumper
* That the boot-mode is enabled! You need to put a jumper over the top header over IIO and GND pins. I will build a switch for to make it easier to use. 
* That you switch over the Rx and Tx connections between serial-to-usb adapter and microcontroller. Rx stands for receiver, and will receive from the Tx (transmmitter) on the otherside and vice versa. So the Rx cable from the serial-to-usb adapter will connect to the Tx terminal of the microcontroller, and the Tx cable of the serial-to-usb adapter will go into the Rx terminal of the microcontroller. 

## Alternative approaches

It could be intersting to look at ESPHome, as it provides many features and includes this board in their use-cases: https://devices.esphome.io/devices/ESP32-Relay-X1