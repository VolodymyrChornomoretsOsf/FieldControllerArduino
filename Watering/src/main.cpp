#include <Arduino.h>
#include <Morse.h>
#include <Common.h>

#define SERIAL_CONST 9600

Common common(SERIAL_CONST);


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  Serial.println(9600);
  //common.log("text");
  // put your main code here, to run repeatedly:
}