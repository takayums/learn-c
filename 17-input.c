#include <stdio.h>
#include <string.h>

int main() {
  int age;
  char name[50];

  printf("Siapa nama kamu?:");
  fgets(name, sizeof(name), stdin);

  name[strcspn(name, "\n")] = '\0';

  printf("Berapa umur kamu?:");
  scanf("%d", &age);

  printf("Nama aku %s dan sekarang berumur %d", name, age);
  return 0;
}
