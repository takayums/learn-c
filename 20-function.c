#include <stdio.h>

// Declare Function
void myFunction() { printf("Hello Wolrd\n"); }

// Function Parameteers
void SayHello(char name[]) { printf("Hello %s \n", name); }

// Function Multiple Parameters
void Introduce(char name[], int age) {
  printf("Hello my name is %s, I %d years old \n", name, age);
}

int main() {
  myFunction();
  myFunction();
  myFunction();

  SayHello("Asraf");
  SayHello("Dikiy");

  Introduce("Asraf", 25);
  return 0;
}
