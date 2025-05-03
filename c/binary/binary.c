#include "binary.h"
#include <stdio.h>

int convert(const char *input){
    int sum = 0;
    int len = strlen(input);

    for(int i = 0; i < len; i++){
        if(input[i] != '0' && input[i] != '1'){
            return INVALID;
        }

        // we start by the '100' 1 here
        sum += pow(2, len - 1 - i) * (input[i] - '0');
    }

    return sum;
}
