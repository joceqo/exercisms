#include "leap.h"

bool leap_year(int year)
{
  bool is_divisible_by_4 = year % 4 == 0;
  bool is_divisible_by_100 = year % 100 == 0;
  bool is_divisible_by_400 = year % 400 == 0;

  if ((is_divisible_by_4 && !is_divisible_by_100) || is_divisible_by_400) {
    return true;
  } else {
    return false;
  }
}
