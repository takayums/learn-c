#include <stdio.h>
int add(int x, int y);
int multiplied(int x, int y);

int add(int x, int y) { return x + y; }

int multiplied(int x, int y) { return x * y; }

int calculate(int a, int b, int (*operasi)(int, int)) { return operasi(a, b); }

int main() {
  printf("Result add is %d \n", calculate(2, 3, add));
  printf("Result add is %d \n", calculate(2, 3, multiplied));
  return 0;
}
