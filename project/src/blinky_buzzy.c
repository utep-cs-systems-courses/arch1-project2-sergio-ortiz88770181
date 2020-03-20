#include <msp430.h>
#include "libTimer.h"
#include "led1.h"
#include "switches.h"
#include "buzzer.h"

int main(void)
{
  configureClocks();
  buzzer_init();
  switch_init();
  or_sr(0x18);
}
