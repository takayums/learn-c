#include <stdio.h>

int add(int x, int y);

int add(int x, int y) { return x + y; }

int main() {
  int (*fp)(int, int);

  fp = &add;

  printf("result x + y = %d \n", fp(3, 5));
  printf("value memory is %p \n", *fp);

  return 0;
}
