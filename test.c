#include <stdio.h>


int main() {
  int a = 10000;
  int b = 100000;
  long r;

  printf("a = %d, b = %d\n", a, b);
  printf("a * b =      %d\n", a * b);

  r = (long) a * (long) b * 10;
  printf("a * b * 10 = %ld\n", r); 

  return 0;
}
