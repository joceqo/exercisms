#include "high_scores.h"
#include <stdlib.h>

int intComparator(const void *first, const void *second);

int32_t latest(const int32_t *scores, size_t scores_len) {
  return scores[scores_len - 1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len) {
  int max = scores[0];

  for (size_t i = 0; i < scores_len; i++) {
    if (scores[i] > max) {
      max = scores[i];
    }
  }

  return max;
}

int intComparator(const void *first, const void *second) {
  int firstInt = *(const int *)first;
  int secondInt = *(const int *)second;
  return secondInt - firstInt;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output) {
  int32_t *sorted = calloc(scores_len, sizeof(int32_t));
  memcpy(sorted, scores, scores_len * sizeof(int32_t));
  qsort(sorted, scores_len, sizeof(int32_t), intComparator);

  size_t count = scores_len > 3 ? 3 : scores_len;
  memcpy(output, sorted, count * sizeof(int32_t));

  return count;
}
