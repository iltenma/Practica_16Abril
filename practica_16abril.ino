#include <Servo.h>
Servo Tatiservo;
int pot = 0;
int potV = 0;

void setup() {
Tatiservo.attach (10); // SIEMPRE PWM
pinMode (11, OUTPUT);
Serial.begin (9600);

}

void loop() {
pot = analogRead (0);
potV = map (pot, 1, 1023, 1, 170);
Serial.println (potV);



//if (potLeer >= 

  Tatiservo.write (potV);
  delay (1000);
  Tatiservo.write (potV);
  delay (1000);

}
