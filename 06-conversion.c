#include <stdio.h>

int main() {
  // Type Conversion Inplicit
  int x = 5;
  int y = 2;
  int z = x / y; // seharusnya 2.5
  printf("Total: %d \n", z);

  // Type Conversion Inplicit
  float sum = (float)x / y;
  printf("Total: %.1f \n", sum);
}
