 # HW10
 First of all my thought process after seeing this assignment was that I wanted the six led's to appear gradually to make a time record in this way. I chose 60 seconds as the record
 I first tried using three led's together according to the tutorial. It failed the first time.
[![test3ledsfailed.md.jpg](https://imgpile.com/images/G9kTux.md.jpg)](https://imgpile.com/i/G9kTux)
Then I went over some details and it worked.
[![test3leds.md.jpg](https://imgpile.com/images/G9kbMj.md.jpg)](https://imgpile.com/i/G9kbMj)

Then I started to try six of them together, but because the bread board wasn't big enough and for some other reason I didn't know how to make the different led's connect together without interfering, so I tried many times.
This photo was taken when I realized that there was always a light bulb that didn't come on. I thought it was because my time settings were too short both were too close together. (Because I was typing in random numbers)
[![test6failed.md.jpg](https://imgpile.com/images/G9kdAo.md.jpg)](https://imgpile.com/i/G9kdAo)

Then I started writing the program I was thinking about, I needed time control, I needed some accurate time intervals, I then set it to once every 10 seconds, just enough to have six, and then reset it. I learned about digitalWrite() and realized that if I used this on my D2 for example, then high means on and low means off, so if the number of seconds is greater than or equal to 10, the LED on pin 2 will light up; otherwise, it will go off. This simple if () idea can control the time difference to convert the time into light!
[![test6.md.jpg](https://imgpile.com/images/G9khjC.md.jpg)](https://imgpile.com/i/G9khjC)
[![sketch and circit.md.jpg](https://imgpile.com/images/G9kCCS.md.jpg)](https://imgpile.com/i/G9kCCS)