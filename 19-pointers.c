#include <stdio.h>

int main() {
  int age = 20;
  int *pntr = &age;

  // pointer digunakan untuk menyimpan memory/alamat dari variabel yang disimpan
  // aksess nilai dari memory tersebut dengan menggunakan *
  // dan deklrasi pointer dengan *namevariablepointers

  printf("Aksess memory dari pointer %p \n", pntr);
  printf("Akses value dari memory pointer %d \n", *pntr);
  return 0;
}
