#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *src, char *str) {

  int i = 0;
  while (str[i] != '\0') {
    src[i] = str[i];
    i++;
  }
  src[i] = '\0';

  return src;
}


int main() {

  char str[100];
  printf("%s\n", my_strcpy(str, "Succesfully copied."));
  printf("%s\n", str);
  return 0;
}
