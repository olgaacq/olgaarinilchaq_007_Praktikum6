#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, kolom, baris, nilai;
  printf(" Segitiga Pascal\n\n");
  printf(" Jumlah Baris: ");
  scanf("%d", & a);

  for (baris = 0; baris < a; baris++) {
    nilai = 1;
    for (b = 0; b < a - baris; b++) {
      printf("%3s", " ");
    }

    for (kolom = 0; kolom <= baris; kolom++) {
      printf("  %3d ", nilai);
      nilai = nilai * (baris - kolom) / (kolom + 1);
    }
    printf("\n");
  }
  printf("\n");

  getch();
}
