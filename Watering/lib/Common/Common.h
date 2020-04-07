#ifndef Common_h
#define Common_h

class Common
{
  public:
    Common(int serial);
    void intToBinDigit(unsigned int in, int count, int* out);
    void printIntArray(int* array, int count);
  private:
};

#endif