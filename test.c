#include <stdio.h>
#include "portalsort.h"

int main(void) {
  int input[11] = {24, 32, 22, 126, 105, 9, 65, 145, 88, 48, 101};
  int auxiliary[11];
  unsigned char i = 0;

  portalsort(11, input, auxiliary);

  while (i != 11) {
    printf("%d\n", auxiliary[i]);
    i++;
  }

  return 0;
}
