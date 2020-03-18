#include <msp430.h>
#include <stdio.h>

void setGreen(char s)
{
  if (s != 0) {
    *(char*)0x22 |= 0x40;
    *(char*)0x21 |= 0x40;
  } else {
    *(char*)0x22 &= 0x40;
    *(char*)0x21 &= 0x40;
  }
}

int main(void)
{
  char s = 1;
  setGreen(s);
}
