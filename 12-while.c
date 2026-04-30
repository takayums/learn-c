#include <stdio.h>

int main() {
  // while
  int i = 1;

  while (i <= 5) {
    printf("Nilai i %d \n", i);
    i++;
  }

  //  do while
  int x = 0;

  do {
    printf("Nilai x: %d \n", x);
    x++;
  } while (x <= 10);

  return 0;
}
