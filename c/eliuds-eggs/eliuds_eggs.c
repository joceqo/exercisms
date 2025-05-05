#include "eliuds_eggs.h"

int egg_count(int display)
{
    int count = 0;
    while (display > 0) {
        int remainder = display % 2;
        if (remainder == 1) {
            ++count;
        }
        display = display / 2;
    }

    return count;
}
