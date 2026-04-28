#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  float z;
  // aritmatika
  z = (float)x / y;
  printf("Total z : %.1f \n", z);

  // increment
  ++x;
  printf("X : %d \n", x);

  // assigment
  y += 10;
  printf("Y : %d \n", y);

  // comparasion
  printf("X > Y = %d \n", x > y);

  // Logical
  printf("X && Y = %d \n", x && y);

  // precedence
  int result = 2 + 3 - 4 * 10;
  printf("Result %d \n", result);

  return 0;
}
