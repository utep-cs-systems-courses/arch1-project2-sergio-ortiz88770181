#include <msp430.h>
#include "switches.h"
#include "led1.h"
#include "buzzer.h"

char switch_state_changed;

int state = 0;

static char switch_update_interrupt_sense()
{
  char p2val = P2IN;
  P2IES |= (p2val & SWITCHES);
  P2IES &= (p2val | ~SWITCHES);
  return p2val;
}

void switch_init()
{
  P2REN |= SWITCHES;
  P2IE = SWITCHES;
  P2OUT |= SWITCHES;
  P2DIR &= ~SWITCHES;
  switch_update_interrupt_sense();
  switch_interrupt_handler();
}

void switch_interrupt_handler()
{
  switch_state_changed = 0;
  char p2val = switch_update_interrupt_sense();

  if (p2val & SW1 ? 0 : 1) {
    state = 01;
  }
  if (p2val & SW2 ? 0 : 1) {
    state = 02;
  }
  if (p2val & SW3 ? 0 : 1) {
    state = 03;
  }
  if (p2val & SW4 ? 0 : 1) {
    state = 04;
  }

  switch (state) {
  case 01:
    switch_state_changed = 1;
    setGreen();
    break;
  case 02:
    switch_state_changed = 1;
    buzzer_set_period(1000);
    break;
  case 03:
    switch_state_changed = 1;
    buzzer_set_period(2000);
    break;
  case 04:
    switch_state_changed = 1;
    setRed();
    break;
  default:
    break;
  }
}
