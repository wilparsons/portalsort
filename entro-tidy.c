#include <stdio.h>
#include "entro-tidy.h"

void entro_tidy(unsigned long count, int *input, int *auxiliary) {
  int copied_input;
  unsigned long even_segment_count;
  unsigned long remainder_segment_count;
  unsigned long merged_segment_count = 2;
  unsigned long unmerged_segment_lower_bound;
  unsigned long unmerged_segment_upper_bound;
  unsigned long i;
  unsigned long j;
  unsigned long k;
  unsigned long l;
  unsigned char is_auxiliary = 1;

  if (count > 1) {
    remainder_segment_count = (count & 1) + 2;
    even_segment_count = count - remainder_segment_count;
    i = 0;

    while (i <= even_segment_count) {
      if (input[i] < input[i + 1]) {
        auxiliary[i + 1] = input[i];
        auxiliary[i] = input[i + 1];
      } else {
        auxiliary[i + 1] = input[i + 1];
        auxiliary[i] = input[i];
      }

      i += 2;
    }

    if (
      remainder_segment_count == 3 &&
      input[i] > auxiliary[i - 1]
    ) {
      auxiliary[i] = auxiliary[i - 1];
      auxiliary[i - 1] = input[i];
      i--;

      if (auxiliary[i] > auxiliary[i - 1]) {
        copied_input = auxiliary[i];
        auxiliary[i] = auxiliary[i - 1];
        auxiliary[i - 1] = copied_input;
      }
    }

    while (merged_segment_count < even_segment_count) {
      unmerged_segment_lower_bound = 0;
      unmerged_segment_upper_bound = (merged_segment_count << 1) - 1;
      i = 0;
      j = merged_segment_count - 1;
      k = merged_segment_count;
      l = unmerged_segment_upper_bound;

      if (is_auxiliary == 0) {
        // In development.
      } else {
        // In development.
      }

      merged_segment_count <<= 1;
      is_auxiliary ^= 1;
      // In development.
    }

    // In development.
  }
}
