#include <stdio.h>
#include <string.h>

// Define the function prototype, C99 compiler gives a warning without it
/* int atoi(); */

int main() {
  atoi("123");
  return 0;
}

int atoi(char s[]) {
  long length = strlen(s);
  int i = 0, n=0;
  for (i=0; i < length && (s[i] >='0' && s[i] <= '9'); ++i) {
    printf ("\nASCII Value of character %d\n", s[i]);
    printf ("Iterating for N = %d\n", n);
    printf ("Value of [%d - %d] is %d\n", s[i],'0',(s[i]-'0'));
    printf ("Formula is [ 10*%d + (%d - '0') ]\n", n, s[i]);
    n = 10*n + (s[i] - '0');
    printf ("N is --> %d\n", n);
  }
  return n;
}
