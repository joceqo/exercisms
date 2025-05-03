#include "darts.h"

uint8_t score(coordinate_t landing_position){
    float x =  landing_position.x;
    float y = landing_position.y;
    float x2 = x * x;
    float y2 = y * y;
    float distance = sqrt(x2 + y2);

    if(distance > 10){
        return 0;
    }else if (distance > 5){
        return 1;
    }else if(distance > 1){
        return 5;
    }else{
        return 10;
    }
}