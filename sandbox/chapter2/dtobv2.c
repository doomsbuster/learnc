#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {
  int number = 9 ;

  for (int i=CHAR_BIT; i == 0; i--) {
    printf ("%d", ((number & (int)pow(2,i)) != 0) ? 1 :0);
  }
}
