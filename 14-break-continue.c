#include <stdio.h>

int main() {
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      continue;
    } else if (i == 5) {
      break;
    }
    printf("Nilai i %d \n", i);
  }
  return 0;
}
