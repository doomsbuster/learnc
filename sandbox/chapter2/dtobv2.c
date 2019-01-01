#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {
  int number = 150;
  int i=(sizeof(number)*CHAR_BIT)-1;
  for (; i >= 0; i--) {
    printf ("%d", ((number & (int)pow(2,i)) != 0) ? 1 :0);
  }
}
