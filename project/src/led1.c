#include "led1.h"

void setRed()
{
  *(char*)0x22 |= 0x40;
  *(char*)0x21 |= 0x40;
}

void setGreen()
{
  *(char*)0x22 |= 1;
  *(char*)0x21 |= 1;
}
