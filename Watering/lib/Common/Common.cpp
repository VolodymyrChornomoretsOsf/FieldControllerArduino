
#include "Arduino.h"
#include "Common.h"

Common::Common(int serial)
{
}

void Common::intToBinDigit(unsigned int in, int count, int* out)
{
  unsigned int mask = 1U << (count - 1);
  int i;
  for (i = 0; i < count; i++) {
    out[i] = (in & mask) ? 1 : 0;
    in <<= 1;
  }
}

void Common::printIntArray(int* array, int count)
{
  for(int i = 0; i < count; i++){
    Serial.print(array[i]);
  }
  Serial.print("\n");
}
