#include <Servo.h>
#define M1 D9
#define M2 D6
#define M3 D5
#define M4 D4
#define M5 D3
#define joyPin A0

Servo M1Servo;
Servo M2Servo;
Servo M3Servo;
Servo M4Servo;
Servo M5Servo;
void setup() {
  M1Servo.attach(M1);
}

void loop() {
  int joyValueX = analogRead(joyPin);  // 0–1023
  int angle = map(joyValueX, 0, 1023, 0, 180);
  M1Servo.write(angle);
  delay(10);
}