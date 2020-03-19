#include "buzzer.h"

void sounds() 
{
  short sounds[] = {1900, 2000, 2500, 3000};
  static char counter = 0;
  buzzer_set_period(sounds[counter]);

  counter++;
  if(counter > 3)
    counter = 0;
}
