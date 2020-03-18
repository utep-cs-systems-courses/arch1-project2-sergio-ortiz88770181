#include <msp430.h>
#include <stdio.h>

int checkButtons()
{
  *(char*)0x22 &= 0x8;
  *(char*)0x27 |= 0x8;
  *(char*)0x21 |= 0x8;

  if (*(char*)0x20 == 0x8) {
    *(char*)0x22 |= 1;
    *(char*)0x21 |= 1;
  } else {
    *(char*)0x22 |= 0x40;
    *(char*)0x21 |= 0x40;
  }
}

int main(void)
{
  checkButtons();
  return 0;
}
