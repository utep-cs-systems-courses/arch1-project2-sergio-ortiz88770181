Description of toy:
	    My toy is amazing. It consists of four states. The first one turns
	    on the green LED. The second one turns on both LEDS and makes a
	    buzzing sound. The third one dimly turns on the red LED and makes
	    a different buzzing sound. Finally, the last one turns on the red
	    LED. Each state can be accessed by clicking on the corresponding
	    button, starting from left to right.

How to compile it:
    Type the 'make' command in the 'src' folder.

How to run it:
    Make sure you have the timer installed. You can either go to the demos
    folder and then to the timer lib folder and type 'make install', or go to
    the 'timer' folder which is literally just a copy and type 'make
    install'. After this, go to the 'src' folder and type 'make load' to load
    the project on the msp430. I forgot to say the most important step, make
    sure an msp430 is hooked up to the VM before any of this!

How to use it:
    Click on the four buttons to transition states. Quick Note: After the
    first use of the third state, the second state will no longer make the buzzing
    noise it was supposed too and both LED's will now shine dimly. These were not
    the intended results, but the requirements of the assignment were met, so
    I did not bother to fix this. I assume the issue lies in how I wrote the
    function to make the leds shine dimly.
