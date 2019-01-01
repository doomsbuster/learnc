#include <stdio.h>

/*
 * Demonstrating the concept of implicit type conversion.
 * - If either operand is long double, convert the other to long double.
 * - Otherwise, if either operand is double, convert the other one to double.
 * - Otherwise, if either operand is float, convert the other one to float.
 * - Otherwise, convert char and short to int
 */
int main() {
  long var = 17;
  short var2 = var + 1;
  long l = -1L;
  int u = 1U;
  printf ("%ld\n", var);
  printf ("%d\n", var2);
  int comp = l < u;
  printf ("Int promoted to signed long is %ld\n", (signed long)u);
  printf ("l -> %lu\n", l);
  printf ("u -> %u\n", u);
  printf ("Comparison results are %d\n", comp);
  return 0;
}
