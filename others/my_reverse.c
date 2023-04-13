#include <stdio.h>
#include <stdlib.h>

char *reverse(char *str) {

  int i = 0;

  while (str[i] != '\0') {
    i++;
  }

  while (i >= 0) {
    printf("%c", str[i]);
    i--;
  }
  printf("\n");
}


int main() {
  char* str = malloc(5*sizeof(char));
  str = "Hello";
  reverse(str);
  return 0;
}
