#include <stdio.h>
#include <string.h>

int main() {
  char greetings[] = "Hello Taka";

  printf("Greeting is %s \n", greetings);

  // string adalah kumpulan dari sebuah char / caracter
  printf("Getting Character %c \n", greetings[0]);

  // Modify String
  greetings[0] = 'A';

  printf("Greeting New is %s \n", greetings);

  // Loop String
  int lenghGreetings = sizeof(greetings) / sizeof(greetings[0]);

  printf("Greeting length %d\n", lenghGreetings);

  for (int i = 0; i < lenghGreetings; ++i) {
    printf("%c\n", greetings[i]);
  }

  // string function
  // length string
  int lengthString = strlen(greetings);
  printf("String Length %d\n", lengthString);

  // gabungan string
  char greetings2[] = " Hai Brother";

  strcat(greetings, greetings2);
  printf("%s \n", greetings);

  // copy string
  char greetings3[25];
  strcpy(greetings3, greetings);

  printf("Greetings3 is %s \n", greetings3);

  // Compare String
  printf("%d \n",
         strcmp(greetings,
                greetings3)); // bernilai 0 maka benar, jika selain 0 maka salah

  return 0;
}
