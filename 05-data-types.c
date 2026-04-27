#include <stdio.h>

int main() {
  // data types and format specifiers
  // 1. int -> %d
  int myAge = 25;
  printf("My Age is %d \n", myAge);

  // 2. float -> %f
  float myPhi = 3.14;
  printf("My Phi is %f \n", myPhi);

  // 3. char -> %c
  char myCharacters = 'b';
  printf("My Characters is %c \n", myCharacters);

  // 4. double -> %lf
  double myDouble = 1.7888788787878;
  printf("My Doubles is %lf \n", myDouble);

  // 5. string -> %s
  char myString[] = "Asraf";
  printf("My String is %s \n", myString);

  return 0;
}
