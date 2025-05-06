#include "perfect_numbers.h"
#include <stdio.h>

int classify_number(int number){
    if(number <=0){
        return ERROR;
    }

    int aliquot = 0;

    for(int i = 1; i < number; i++){
        if(number % i == 0){
            aliquot = aliquot + i;
        }
    }

    if(aliquot == number){
        return PERFECT_NUMBER;
    }else if(aliquot > number){
        return ABUNDANT_NUMBER;
    }else{
        return DEFICIENT_NUMBER;
    }
}
