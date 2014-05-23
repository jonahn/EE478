#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

unsigned char iteration;

void main (void) {
  //for testing LED
  STM_EVAL_LEDInit(LED6);
  iteration = 0;

  STM_EVAL_LEDOff(LED6);

  while(1) {
    //test board LED
    iteration++;
    if (iteration%10000000 == 0)
    {
      STM_EVAL_LEDToggle(LED6);
    }

  }

}
