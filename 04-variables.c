#include <stdio.h>

int main() {
  // Decalaring variables
  int myNum;
  myNum = 5;

  char myName[] = "asraf";

  // Format Spesific use "%"
  // %d for int
  // %f for float
  // %c for string
  printf("My Number is  %d \n", myNum);

  // Change Variables
  myNum = 6;

  int myNumNew = 5;
  int myNumTotal = myNum + myNumNew;
  printf("Total variables is %d", myNumTotal);

  // Multiple declare type on same type
  int x, y, z;
  x = 1;
  y = 2;
  z = 3;

  // Variables Names Rules
  // 1. Terdiri dari angka, underscore, dan juga huruf
  // 2. Diawali dengan huruf atau underscore
  return 0;
}
