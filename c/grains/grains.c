#include "grains.h"

uint64_t square(uint8_t index){
    if(index == 1){
        return 1;
    }
    return square(index-1)*2;
}

uint64_t total(void){
    uint64_t returnValue = 0;
  for (int i = 1; i <= 64; i++)
  {
    returnValue += square(i);
  }
  return returnValue;
}
