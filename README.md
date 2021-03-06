
# README #

  

Hello fellow robotics-programmers! You are on the github site of [teamohnename.de](http://jan.blumenkamp.net/teamohnename/)'s RoboCup Junior Rescue B/Maze Software. Before you start exploring our software, please read this readme!

  

### What is this repository for?

  

We now participated since four years more or less successfully at RoboCup Junior and put much afford in our robot. Now, we don't need it anymore and it would be a shame if the software just stays at our Laptops. So, we want to make the first steps into creating a more complex robot for RoboCup Junior Rescue a bit easier by publishing our software. We also put much work into our documentation and our blog and, by the way, think that more teams should do this (especially as this competition is a research competition where it doesn't matter who wins or not but how much is the progress and how much can the teams learn from each other.

There are more arguments for putting the software into the internet than against doing it. One big argument is the learning progress. One may say that the teams don't learn anything by putting the nice working code for re-use in the internet. But *before* one may use the code, one has to understand it (especially if one wants to be able to debug it diring the competition). In our opinion, if one understands the approximately 10000 lines of self written code (not counting ready to use librarys) and is able to implement it on one's own robot, we don't have any problems with that.

Still, we think that it makes more sense to only use selected parts of the software. There is much low-level stuff and much parts that are really not well designed (what works works). We usually only put much efford in parts that *has* to work reliable and *has* to be efficient. Some parts of the software are also really old, please don't judge the programming style of some parts :D

  

We started using git only one year ago and initialized this repository in January 2015. We started with the superteam version of Brazil 2014 as we lost the original version, what's the reaason of some pre-mapping functions (during superteam, this was allowed, so don't wonder about that :D).

  

We especially want you to have a look on the mapmatching branch. We think that there is a big potential - the thought behind this is a really basic SLAM without the need of Lasers. For more information, see the wiki.

  

### How do I get set up?

  

This repository is not really thought for setting up on your robot. There are some well capsuled part of codes that may be really easy to re-use and some parts that are highly integrated and only work with *our* robot. So please think about what you use ;)

  

### Repository structure

*  **Project** - The actual source code files
	*  **sys** - folder containing some self written and other librarys and all other files
		*  **bluetooth** - bluetooth abstraction layer. Actually only interfacing the uart
		*  **debug** - Protocol layer for sending debug messages and the map to a base station. Implemented but not tested.
		*  **display** - Display Menu/UI. This is one of the things with the biggest optimization potential, but also one of the least important things, why we did not bother.
		*  **drive** - All driving related functions (drive one tile straight, turn 90°, ...)
		*  **funktionen** - several functions for everything or experimental that did not match in other files
		*  **i2cdev** - all i2c sensor interface functions (MLX90614 temperature and SRF10 ultrasonic)
		* **i2cmaster/twimaster** - I2C Library by Peter Fleury
		*  **irdist** - contains state machine to interface the ir distance sensors. There may only be one sensor per site active, totherwise they * interfere!
		*  **mainh -** should actually be robocup.h. Contains prototypes etc. for important global variables
		*  **maze** - most important part - the main state machine deciding how to drive and controlling mainly everything regarding solving the maze
		*  **mazefunctions** - abstraction functions for interfacing the map. Also contains some experimental SLAM stuff
		*  **memcheck** - RAM memory check - at boot, the ram is written with a pattern (like 0xaa 0xbb 0xaa ...) for detecting the maximum ram usage during runtime.
		*  **menu** - planned to make the mess in display files clean by using the u8g/mt2k menu librarys. Never had time for that.
		*  **pixy** - Interface for the Pixy Cam /CMUCam 5 (UART). We planed to use it for black tile detection, but it can only detect colors...
		*  **system** - some really low level systems initialization stuff
		*  **uart** - Uart Library by Peter Fleury
		*  **um6** - UM6 IMU Interfacing Library (UART based)
		*  **victim** - some victim identification stuff. Only experimental, we always used a simpel threshold stored in EEPROM configurable via display files menu.
	*  **u8g** - folder containing the u8g display library files
	*  **LICENSE**
	*  **Makefile**
	*  **robocup.c** - Main file of our project containing the int main
* **archive** - Files from RCJ 2012 and RCJ 2013
*  **documentation** - documentation, mainly containing some images for the wiki "Facharbeit" explaining the SLAM stuff
*  **pcb** - Contains all the files of the circuit diagrams
*  **README**

  

### Contribution guidelines

  

Please let us know if you make any progresses (especially with the kind of SLAM thing). We really would like to see that! :D Maybe for this an own repository would be good...

We publish this software under the MIT License.

  

### Who do I talk to?

  

If you have any questions, feel free to contact us!

  

### What else we want to say

  
This software was developed within like 4 years. Unfortunately, we only started using git in the last year. (Maybe we add our old software in an archive folder). Many parts were rewritten after some time. It is really difficult to keep 10000 lines of code up to date. As we often had time pressure, we made things just to work! Today, we surely would make a few things different, but this repository also shows our learning process over time.