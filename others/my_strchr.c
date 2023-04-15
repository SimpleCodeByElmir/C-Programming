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
  
  if (ret == NULL) {
    ret = "0";
  }
  return ret;
}

int main() {

  char *str = "Hello";
  printf("%s\n", my_strchr(str, 'l'));
  
  return 0;
}
