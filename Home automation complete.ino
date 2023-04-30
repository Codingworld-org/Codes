#include <Servo.h>
#define ledPin 7
int state = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 }
 if (state == '0') {
  digitalWrite(ledPin, LOW); 
  state = 0;
 }
 else if (state == '1') {
  digitalWrite(ledPin, HIGH);
  state = 0;
 } 
}
