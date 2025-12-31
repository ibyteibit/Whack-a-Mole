# Whack-a-Mole - *Personal Project (present for my brother's 10th bday)*
![whack-a-mole pic](https://github.com/ibyteibit/Whack-a-Mole/blob/main/WhackaMole.png)
## Description
- A Whack-a-Mole game: when an LED flashes, the player must quickly press the button next to it
- Each level, the buzzer plays “Happy Birthday” and the difficulty increases (faster blink + more whacks needed)
- Cheat-proof: the buttons cannot be held down to score a “whack” nor can the user click them to a beat
## Materials
### Electronics:
- Arduino UNO
- Breadboard
- LEDs & Buzzers
- Pushbuttons
- Jumper Wires
### Tools:
- Arduino IDE
## Methodology
- Developed the game logic in C++ using Arduino IDE
- Enabled parallel control of LEDs and button clicks by using millis() for delays
- Integrated random() to select an LED to flash and vary the wait time between flashes
