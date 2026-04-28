#include <stdio.h>

int main() {
  // data types and format specifiers
  // 1. int -> %d
  int myAge = 25;
  printf("My Age is %d \n", myAge);

  // 2. float -> %f
  float myPhi = 3.14;
  printf("My Phi is %f \n", myPhi);

  // 3. char -> %c
  char myCharacters = 'b';
  printf("My Characters is %c \n", myCharacters);

  // 4. double -> %lf
  double myDouble = 1.7888788787878;
  printf("My Doubles is %lf \n", myDouble);

  // 5. string -> %s
  char myString[] = "Asraf";
  printf("My String is %s \n", myString);

  // Characters
  // Di c characters dan string itu berbeda. Characters bertipe char dengan
  // value disimpan hanya satu characters di apit dengan single quote ''. Dan
  // untuk  string itu disimpan dalam type char MyVariable[] dengan ditandai
  // diapti oleh double qoute "";

  // Numbers
  // int untuk menyimpan nilai berbentuk desimal atau bilangan bulat
  // float untuk menyimpat nilai memiliki koma dibelakang nya seperti 3.14.
  // hanya mampu meyimpan nilai diblangakang koma yaitu 7 double sama seperti
  // float tapi nilai dibalakang maksimal disimpan yaitu 15 float vs double,
  // float lebih menghemat memeroy penggunaan peyimpnana data variable
  // dibandingkan dengan double

  // float
  printf("%.1f", myPhi); // menampilkan satu angka dibelakang koma

  // memoery
  printf("%zu", sizeof(myAge));
  printf("%zu", sizeof(myPhi));
  return 0;
}
