#include <stdio.h>
#define D 2
#define N 10

int main() {

  int mass[D][N] = {{9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
                    {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}};
  int i = 0, j = 0, q = 0;
  int c = 0;

  for (q = 0; q < D; q++) {
    for (i = 0; i < N - 1; i++) {
      for (j = 0; j < N - 1; j++) {
        if (mass[q][j] > mass[q][j + 1]) {
          c = mass[q][j];
          mass[q][j] = mass[q][j + 1];
          mass[q][j + 1] = c;
        }
      }
    }
  }

  i = 0, j = 0;
  while (i < D) {
    j = 0;
    while (j < N) {
      if (j != N - 1) {
        printf("%d ", mass[i][j]);
      } else {
        printf("%d\n", mass[i][j]);
      }
      j++;
    }
    i++;
  }

  return 0;
}
