# Whack-a-Mole
![whack-a-mole pic](https://github.com/ibyteibit/Whack-a-Mole/blob/main/WhackaMole.png)
## Description
- A Whack-a-Mole game: when an LED flashes, the player must quickly press the button next to it
- Each level, the buzzer plays “Happy Birthday” and the difficulty increases (faster blink + more whacks needed)
- Cheat-proof: the buttons cannot be held down to score a “whack” nor can the user click them to a beat
## Materials & Tools
### Electronics:
- Arduino
- Breadboard
- LEDs & Buzzers
- Pushbuttons
- Jumper Wires
### Tools:
- Arduino IDE
## Methodology
- Developed the C++ code in Arduino IDE
- Programmed a counter variable to control the LEDs and listen for button clicks in parallel
- Utilized random() to select an LED to flash and to vary the wait time between flashes
