#include <stdio.h>
FILE *fptr;

int main() {
  fptr = fopen("file.txt", "a");
  // a untuk menambahkan isi dari file

  fprintf(fptr, "Hello Ini isi Nya \n");

  fclose(fptr);
}
