/* file: main.c */

#include <stdio.h>
#include "add.h"

int main (int argc, char *argv[])
{
  int a, b;
  float c, d; 
  double e, f;
  a = 20;
  b = 45;
  c = 2000.50;
  d = 4500.75; 
  e = 0.0025;
  f = 0.0750;
  printf("The sum of %d and %d is: %d\n", a, b, iadd(a, b));
  printf("The sum of %.2f and %.2f is: %.4f\n", c, d, fadd(c, d));
  printf("The sum of %.6f and %.6f is: %.6f\n", e, f, dadd(e, f));
  return 0;
}

