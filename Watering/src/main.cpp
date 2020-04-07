#include <Arduino.h>
#include <Common.h>

#define SERIAL_CONST 9600

Common common = Common(SERIAL_CONST);


void setup() {
  Serial.begin(SERIAL_CONST);
  // put your setup code here, to run once:
}

void loop() {
  int n = 4;
  int digit[n];
  common.intToBinDigit(9, 4, digit);
  common.printIntArray(digit, n);
}