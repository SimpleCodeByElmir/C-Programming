#include <stdio.h>
#define N 10

int main() {

  int mass[N] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int i = 0, j = 0, c = 0;

  while (i < N-1) {
    j = 0;
    while (j < N-1) {
      if (mass[j] > mass[j + 1]) {
        c = mass[j];
        mass[j] = mass[j + 1];
        mass[j + 1] = c;
      }
      j++;
    }
    i++;
  }

/*  // or using 'for' loop mechanism
  for (i = 0; i < N-1; i++) {
    for (j = 0; j < N-1; j++) {
      if (mass[j] > mass[j + 1]) {
        c = mass[j];
        mass[j] = mass[j + 1];
        mass[j + 1] = c;
      }
    }
  }
*/

  // print elements
  i = 0;
  while (i < N) {
    if (i != N-1) {           // put spaces between elements
      printf("%d ", mass[i]);
    } else {                  // no space after last element, put '\n'
      printf("%d\n", mass[i]);
    }
    i++;
  }

  return 0;
}
