#include <stdio.h>


int main() {
  int a = 5;
  int b;

  printf("a = %d\n", a);

  b = a -= 3;

  printf("a = %d, b = %d\n", a, b);


  return 0;
}
