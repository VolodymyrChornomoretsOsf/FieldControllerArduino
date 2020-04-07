
#include "Arduino.h"
#include "Common.h"

Common::Common(int serial)
{
  Serial.begin(serial);
}

void Common::log(char* input)
{
  Serial.println(input);
}

