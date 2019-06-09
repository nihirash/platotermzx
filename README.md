# PLATOtermZX for ZX-Uno(and ZX-Uno XL and ZX-GO+) 

PLATOtermZX is a terminal emulator to access CYBIS services now available on the Internet utilizing a ESP8266(WIFI-Addon).

For the purposes of this documentation. PLATO and CYBIS are interchangeable names for the same platform.

## Requirements

 * ZX-Uno, ZX-Go+, ZX-Uno XL
 * Core with UART support
 * WiFi-Addon(or ESP-12F/12E chip with default firmware connected to UART)

## What services are currently available to access via PLATOTerm?

As of writing this preliminary documentation (June 2019), there are two major CYBIS systems running. CYBER1.ORG and IRATA.ONLINE.

## WHAT IS PLATO? (aka CYBIS?)

from the PLATO wikipedia page:)

PLATO (Programmed Logic for Automatic Teaching Operations), was the first generalized computer-asisted instruction system. Starting in 1960, it ran on the University of Illinois ILLIAC I computer. By the late 1970s, it supported several thousand graphics terminals distributed worldwide, running on nearly a dozen different networked mainframe computers. Many modern concepts in multi-user computing were originally developed on PLATO, including forums, message boards, online testing, e-mail, chat rooms, picture languages, instant messaging, remote screen sharing, and multi-player games.

## What is CYBER1.ORG?

CYBER1.ORG is a CYBIS system initially set up in 2004, as a haven for ex-PLATO users to experience a classic PLATO author experience.

CYBER1.ORG is home to many thousands of classic PLATO lessons and notesfiles which have been restored from various sources, and have been made available in the interests of preserving PLATO.

## What is IRATA.ONLINE?

IRATA.ONLINE is a CYBIS system that has been set up for the benefit of the greater vintage computing community, in the interest to provide a unique experience that can be accessed on a wide variety of vintage computers with a bitmapped graphics display. To this end, IRATA.ONLINE develops PLATOTerm for dozens of platforms, so that they can access CYBIS systems, as well as provide a community and learning infrastructure for vintage computing users of all types, in the hopes that as a cohesive community, something unique can hopefully emerge.

## What is the connection between IRATA.ONLINE and CYBER1.ORG?

CYBER1.ORG and IRATA.ONLINE are independent of one another. With that said, the reason IRATA.ONLINE and PLATOTerm exist, are because of the efforts of CYBER1.ORG to not only preserve a running PLATO system, and provide the necessary information for interested parties to write terminal software to access CYBIS systems, but also in their effort to produce a publically available distribution of CYBIS that others who are interested may also run their own CYBIS installation. IRATA.ONLINE is a direct result of the public release of this distribution.

## Loading PLATOtermZX for ZX-Uno

Before first run you must store your wifi creds. 

To do it, please, use `.iwconfig` utility:


```
.iwconfig SSID PASSWORD
```

You may get it [here](http://www.zxuno.com/forum/viewtopic.php?f=39&p=26073)

After it, just load tap-file with ZX-Uno version of PLATOterm.

After using it(if you doesn't shutdown your UNO) you need to reset ESP-chip.

Please, use special tool for it `.esprst` :

```
.esprst
```


## Credits

 * [Original PLATOtermZX](https://github.com/tschak909/platotermzx) was made by Thomas Cherryhomes
 * Alexander Sharkhin adopted it for ZX-Uno