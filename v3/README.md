# Robot Power Distribution Board v3

For this revision, I fixed the cap silkscreens, which necessitated
shifting some things around.

## Specifications

* Dimensions: 77.2 x 31.8 mm (3.04 x 1.25 inches).
* Input voltage: 6-12V
* Output voltages: 3.3V @ 800mA, 5V @ 1.5A

## Bill of materials

* 1x RPDBv3 PCB ([OSHPark](https://oshpark.com/shared_projects/M7HbM4bz))
* 2x 5mm pitch screw terminal ([Sparkfun](https://www.sparkfun.com/products/8432))
* 2x mini power switch([Sparkfun](https://www.sparkfun.com/products/102))
* 1x 1000uF electrolytic capacitor ([Sparkfun](https://www.sparkfun.com/products/8982))
* 2x 100uF electrolytic capacitor ([Sparkfun](https://www.sparkfun.com/products/96))
* 1x L7805 5V voltage regulator ([Sparkfun](https://www.sparkfun.com/products/107))
* 3x 2x8 header ([Sparkfun](https://www.sparkfun.com/products/13156))

## Assembly

1. Solder the 2x8 headers.
2. Solder the voltage regulators. Screw them in if desired.
3. Solder in the switches.
4. Solder in the terminals.
5. Solder in the 100uF capacitors.
6. Solder in the 1000uF capacitor.

## Usage

* Wire the battery into the power terminal.
* Wire the motor controller to the motor terminal.
* Connect up parts to the appropriate rail.
* Note that toggling the kill switches under high motor load can cause
  them to fuse.

