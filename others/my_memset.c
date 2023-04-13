#include <stdio.h>
#include <stdlib.h>

void *my_memset(char *str, int c, size_t n) {

  int i = 0;

  while (i < n) {
    str[i] = c;
    i++;
  }

  return str;
}

int main() {

  char *str = malloc(10 * sizeof(int));
  my_memset(str, 88, 8);
  printf("%d\n%d\n%d\n%d\n", str[0], str[2], str[7], str[10]);
  free(str);
  return 0;
}
