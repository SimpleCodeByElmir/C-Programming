#include <stdio.h>

char *my_strchr(char *str, int c) {

  char *ret = NULL;

  while (*str != '\0') {
    if (*str == (char)c) {
      ret = (char *)str;
      break;
    }
    *str++;
  }

  return ret;
}

int main() {

  char *str = "Hello";
  char *res = my_strchr(str, 'l');
  printf("%s\n", res);
  return 0;
}
