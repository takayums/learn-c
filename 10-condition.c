#include <stdbool.h>
#include <stdio.h>

int main() {
  int x = 10;
  int y = 20;

  bool isGreate = y > x;

  if (isGreate) {
    printf("Y is Greater than x ? %d\n", isGreate);
  } else if (x == y) {
    printf("X is same with y \n");
  } else {
    printf("X is not Greater than y \n");
  }

  // short condition
  int time = 20;

  (time < 18) ? printf("Good day \n") : printf("Good evening \n");

  // nested condition
  if (x > 5) {
    printf("X lebih besar dari 5 \n");

    if (y > 10) {
      printf("y lebih besar dari 10 \n");
    }
  }
  return 0;
}
