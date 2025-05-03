#include "armstrong_numbers.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>


bool is_armstrong_number(int candidate){
    int candidatedStrLength = snprintf( NULL, 0, "%d", candidate );
    int final =0 , n = 0 ;
    int candidateCopy = candidate;
    while(candidateCopy){
        int currentDigit = candidateCopy%10;
        printf("the current number %i \n", (int)pow(currentDigit,candidatedStrLength));
        printf("final %i \n", final);
        final = final + (int)pow(currentDigit,candidatedStrLength);
        n++;
        candidateCopy = candidateCopy / 10;
        printf("sum %i \n", final);
    }
    return final == candidate ? true : false;
}