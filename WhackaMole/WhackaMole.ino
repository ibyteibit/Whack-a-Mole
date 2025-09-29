int LED1 = 8;
int LED2 = 9;
int LED3 = 10;
int BUZ = 11;
int BUT1 = 2;
int BUT2 = 3;
int BUT3 = 4;
int LEDs[] = {LED1, LED2, LED3};
int BUTs[] = {BUT1, BUT2, BUT3};
int rn;
int ctr = 0;
bool ledOn = false;
int pts = 0;
int level = 0;
bool clicked = false;
int randTime;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(BUZ, OUTPUT);
  pinMode(BUT1, INPUT);
  pinMode(BUT2, INPUT);
  pinMode(BUT3, INPUT);
  randomSeed(analogRead(0));
  randTime = 200 + random()%401;
  tone(BUZ, 659.25, 250);
  delay(500);  
}

void loop() {
  if (ledOn && !clicked) {
    if (digitalRead(BUTs[rn]) == HIGH) {
      tone(BUZ, 440, 500);
      pts++;
      clicked = true;
      Serial.println(pts);
      if (pts == (5 + level)) {
        happyBirthday();
        pts = 0;
        level++;
        for (int i = 0; i <= level; i++) {
            tone(BUZ, 659.25, 250);
            delay(300);
        }
      }
    }
  }
  if (ctr == 0) {
    rn = random()%3;
    Serial.println(rn);
    digitalWrite(LEDs[rn], HIGH);
    ledOn = true;
    if (digitalRead(BUTs[rn]) == HIGH)
      clicked = true;
  }
  ctr++;
  if (ctr == (100 - (5*level))) {
    digitalWrite(LEDs[rn], LOW);
    ledOn = false;
    clicked = false;
  }
  if (ctr == randTime) {
    ctr = 0;
    randTime = 200 + random()%401;
  }
 
  delay(5);
}
//GGAGCB GGAGDC GGGECBA FFECDC
void happyBirthday() {
  digitalWrite(LEDs[rn], LOW);
  ledOn = false;
  delay(1000);
  tone(BUZ, 392, 375);
  LEDFlash(375);
  delay(25);
  tone(BUZ, 392, 125);
  LEDFlash(125);
  delay(25);
  tone(BUZ, 440, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 392, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 523.25, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 493.88, 1000);
  LEDFlash(1000);
  delay(100);

  tone(BUZ, 392, 375);
  LEDFlash(375);
  delay(25);
  tone(BUZ, 392, 125);
  LEDFlash(125);
  delay(25);
  tone(BUZ, 440, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 392, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 587.33, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 523.25, 1000);
  LEDFlash(1000);
  delay(100);

  tone(BUZ, 392, 375);
  LEDFlash(375);
  delay(25);
  tone(BUZ, 392, 125);
  LEDFlash(125);
  delay(25);
  tone(BUZ, 793.99, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 659.25, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 523.25, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 493.88, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 440, 1000);
  LEDFlash(1000);
  delay(100);

  tone(BUZ, 698.46, 375);
  LEDFlash(375);
  delay(25);
  tone(BUZ, 698.46, 125);
  LEDFlash(125);
  delay(25);
  tone(BUZ, 659.25, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 523.25, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 587.33, 500);
  LEDFlash(500);
  delay(25);
  tone(BUZ, 523.25, 1500);
  LEDFlash(1500);
  delay(1000);
}

void LEDFlash(int time) {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  delay(time);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
}

