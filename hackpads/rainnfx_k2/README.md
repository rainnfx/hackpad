# rainnfx_k2

This is my second attempt at making a solid macropad, this time I'm going with a much more simple, yet effective approach.

## Features:
- EC11 Rotary encoder
- 6 Keys

## CAD Model:
Everything fits together using 4 M3 Bolts and heatset inserts.

It has 3 separate printed pieces. The base where the PCB will sit, the top cover, and a custom knob for the encoder.

[ img will go here ]

Made in Shapr3d.

## PCB
Here's my PCB! It was made in KiCad.

Schematic
[ img ]

PCB
[ img ]

## Firmware Overview
This hackpad uses [QMK](https://qmk.fm/) firmware for everything. 

- the rotary encoder changes volume. press to mute
- The 6 keys currently are sort of placeholders, since I have no clue what I'll assign them to yet (probably to open some apps or smth)!

## BOM:
Here should be everything you need to make this hackpad

- 6x Cherry MX Switches
- 6x DSA Keycaps
- 4x M3x5x4 Heatset inserts
- 4x M3x16mm SHCS Bolts
- 6x [MMSD4148T1G](https://www.digikey.ca/en/products/detail/onsemi/mmsd4148t1g/919705) Diodes.
- 1x [EC11E15204A3](https://www.digikey.ca/en/products/detail/alps-alpine/ec11e15204a3/21721644)
- 1x XIAO RP2040
- 1x Case (3 printed parts)
