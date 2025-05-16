#include "pangram.h"

bool is_pangram(const char *sentence){
    if (sentence == NULL) {
        return false;
    }

    bool letter_found[26] = {false};

    for (size_t i = 0; sentence[i] != '\0'; i++){
        char c = tolower(sentence[i]);
        if (c >= 'a' && c <= 'z') {
            letter_found[c - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!letter_found[i]) {
            return false;
        }
    }

    return true;
}
