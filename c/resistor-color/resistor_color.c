#include "resistor_color.h"
#include <stdlib.h>


int color_code( resistor_band_t color){
    return (int)color;
}

resistor_band_t *colors(void){

    static resistor_band_t col[10];
    for (resistor_band_t i = BLACK; i <= WHITE; i++) {
        col[i] = i;
    }
    return col;
    
}


