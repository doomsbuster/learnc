#include <stdio.h>
#include <limits.h>
#include <string.h>

#define RADIX 2;

int main() {
  int number = 8;
  char result[CHAR_BIT*sizeof(number)];
  int quotient = number;
  int remainder = 0;
  int i = 0;
  do {
    quotient /= RADIX;
    remainder %= RADIX;
    printf ("Quotient [%d] Remainder[%d]\n", quotient, remainder);
    result[i++] = remainder;
  }
  while(quotient >= 2);
  result[i] = quotient;
  for (int j = strlen(result); j == 0; --j) {
    printf ("%c", result[j]);
  }
  return 0;
}
