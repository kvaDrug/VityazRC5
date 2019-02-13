# VityazⓇ TV Remote Control Protocol

[VityazⓇ](http://en.vityas.com/) simply utilises [RC-5](https://en.wikipedia.org/wiki/RC-5) protocol. The field bit is constantly set to 1. The address (5 bit) is always 0 and the available commands (6 bit) are listed in Table 1.  

The commands was obtained with help of the Arduino project based on [IRLib2](https://github.com/cyborg5/IRLib2). The `.ico` file can be found in the repository.

| Button Symbol | 6-bit Command | HEX | DEC | Button Symbol | 6-bit Command | HEX | DEC |
| :-----------: | ------------- | --- | --- | :-----------: | ------------- | --- | --- |
| AV | `111000` | `38` | `56` | OK | `111011` | `3B` | `59` |
| <img src="Images/standby.png" alt="Standby" width="30" height="30"> | `001100` | `C` | `12` | PP | `001110` | `E` | `14` |
| 1 | `000001` | `1` | `1` | - | `010001` | `11` | `17` |
| 2 | `000010` | `2` | `2` | + | `010000` | `10` | `16` |
| 3 | `000011` | `3` | `3` | P+ | `100000` | `20` | `32` |
| 4 | `000100` | `4` | `4` | P- | `100001` | `21` | `33` |
| 5 | `000101` | `5` | `5` | small + | `001010` | `A` | `10` |
| 6 | `000110` | `6` | `6` | PIP | `100110` | `26` | `38` |
| 7 | `000111` | `7` | `7` | small - | `001011` | `B` | `11` |
| 8 | `001000` | `8` | `8` | <img src="Images/teletext.png" alt="Teletext" width="30" height="30"> | `111100` | `3C` | `60` |
| 9 | `001001` | `9` | `9` | <img src="Images/blend.png" alt="Teletext Blend" width="30" height="30"> | `101110` | `2E` | `46` |
| 0 | `000000` | `0` | `0` | <img src="Images/pagesize.png" alt="Teletext Page Size" width="30" height="30"> | `101011` | `2B` | `43` |
| <img src="Images/mute.png" alt="Mute" width="30" height="30"> | `001101` | `D` | `13` | <img src="Images/pagehold.png" alt="Teletext Pagehold" width="30" height="30"> | `101001` | `29` | `41` |
| M | `001111` | `F` | `15` | X | `101101` | `2D` | `45` |
| red | `110111` | `37` | `55` | <img src="Images/segment.png" alt="Teletext Subpage Mode" width="30" height="30"> | `101010` | `2A` | `42` |
| green | `110110` | `36` | `54` | I-II | `100011` | `23` | `35` |
| yellow | `110010` | `32` | `50` | i | `110101` | `35` | `53` |
| blue | `110100` | `34` | `52` | ? | `101100` | `2C` | `44` |
| esc | `111111` | `3F` | `63` |   |   |   |    |

Suitable for TV models:
- MOBILVISION M
- MICRA
- MICRA M
- ALPHA
- FAVORITE
- LOTOS
- GALAX-21
- GALAX-21M
- PLANIT
- TIME
- ASTRA

And remote control models:
- ПДУ-7
- ПДУ-10
- ПДУ-11

