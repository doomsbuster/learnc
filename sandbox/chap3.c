#include <stdio.h>
#include <string.h>

void getNumberFromString();

int main() {
  enum Flags {AMERICA, INDIA, CHINA};
  printf("%d " "%d " "%d\n", AMERICA, INDIA, CHINA);

  int country = 0;

  if (country == AMERICA) {
    printf ("The flag is America");
  }
  else if (country == INDIA) {
    printf ("The country is India");
  }
  else {
    printf ("The country is China");
  }
  char c[3] = {1,2,3};
  getNumberFromString("123");

  return 0;
}

void getNumberFromString(char s[]) {
  int i=0, n=0;
  printf ("%d", s[i]);
  for (i=0; i < (int)strlen(s) && (s[i] >= '0' && s[i] <= '9'); i++) {
    printf ("\nASCII Value of character %d\n", s[i]);
    printf ("Iterating for N = %d\n", n);
    printf ("Value of [%d - %d] is %d\n", s[i],'0',(s[i]-'0'));
    printf ("Formula is [ 10*%d + (%d - '0') ]\n", n, s[i]);
    printf ("N is --> %d\n", n);
    n = 10*n + (s[i] - '0');
  }

  printf ("\nValue of N is %d\n", n);
}
