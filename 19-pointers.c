#include <stdio.h>

int main() {
  int age = 20;
  int *pntr = &age;

  // pointer digunakan untuk menyimpan memory/alamat dari variabel yang disimpan
  // aksess nilai dari memory tersebut dengan menggunakan *
  // dan deklrasi pointer dengan *namevariablepointers

  printf("Aksess memory dari pointer %p \n", pntr);
  printf("Akses value dari memory pointer %d \n", *pntr);

  // pointer to ponter
  // menyimpan alamat ponter dari variabel pointer
  int **ppntr = &pntr;
  printf("Alamat / Value dari pntr disimpan di ppntr %p \n", ppntr);
  printf("Akses value pntr %d", **ppntr);
  return 0;
}
