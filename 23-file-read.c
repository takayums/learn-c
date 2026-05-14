#include <stdio.h>
FILE *fptr;

int main() {
  fptr = fopen("file.txt", "r");
  // r - membaca file.

  char myString[100];

  if (fptr != NULL) {
    fgets(myString, sizeof(myString), fptr);
    printf("%s", myString);
  } else {
    printf("Not able to open the file\n");
    return -1;
  }

  fclose(fptr);
}
