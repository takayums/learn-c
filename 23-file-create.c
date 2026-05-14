#include <stdio.h>
FILE *fptr;

int main() {
  fptr = fopen("file.txt", "w");
  // w - membuat file baru.

  fclose(fptr);
}
