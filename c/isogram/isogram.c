#include "isogram.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

bool is_isogram(const char phrase[]) {
    
    if(!phrase) {
        return 0;
    }
    int phraseLength = (int)strlen(phrase);
    char copyPhrase[phraseLength];
    memset( copyPhrase, '\0', phraseLength*sizeof(char) );

    for (int i = 0; i < phraseLength; i++) {
        copyPhrase[i] = tolower(phrase[i]);
        if (!isalpha(copyPhrase[i])) {
            continue;
        }
        for (int j = 0; j < phraseLength; j++) {
            if (i != j && copyPhrase[i] == copyPhrase[j]) {
                return 0;
            }
        }
    }
    return 1;
}
