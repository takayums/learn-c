#include <stdio.h>

// declaretion function
void myFunction();
int Sum(int x, int y);

// Declare Function
// Definition function
void myFunction() { printf("Hello Wolrd\n"); }

// Function Parameteers
void SayHello(char name[]) { printf("Hello %s \n", name); }

// Function Multiple Parameters
void Introduce(char name[], int age) {
  printf("Hello my name is %s, I %d years old \n", name, age);
}

// global variable
int z = 10;

// Definition Function
int Sum(int x, int y) {
  // local variable
  int result = x + y;
  return result;
}

int main() {
  myFunction();
  myFunction();
  myFunction();

  SayHello("Asraf");
  SayHello("Dikiy");

  Introduce("Asraf", 25);

  int result = Sum(3, 5);
  printf("%d \n", result);

  return 0;
}
