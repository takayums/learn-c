#include <stdio.h>

int main() {
  // array terdiri dari 5 element
  int element[5] = {1, 2, 3, 4, 5};

  // akses nilai dalam array
  int nilai1 = element[0];
  printf("%d \n", nilai1);

  // ganti nilai dalam array
  element[0] = 50;
  printf("%d \n", nilai1);

  // mengetahui panjang dari array
  printf("Size of element is %zu \n",
         sizeof(element)); // hasilnya tidak 5 karena sebenarnya untuk nilai 20
                           // didapatkan dari setiap nilai dari element
                           // merepresentasikan memeroy bytes nilai dalam satu
                           // nilai di element
  // jadi nilai 1 menandakan 4 bytes memeroy dari nilai di array
  // jadi jika ada 5 nilai dalam satu array maka 4 * 5 = 20;

  // solusi mencari panjang array adalah
  printf("panjang array adalah %zu \n", sizeof(element) / sizeof(element[0]));

  // looping nilai dalam array
  int length = sizeof(element) / sizeof(element[0]);
  for (int i = 0; i < length; i++) {
    printf("%d \n", element[i]);
  }

  return 0;
}
