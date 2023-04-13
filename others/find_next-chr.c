#include <stdio.h>

int main() {

  char *str = "AAABBBBCCCCCXYAAABBCDDDDD";
  int i = 0;
  int count = 0;

  while (str[i] != '\0') {

    if (str[i] == str[i - 1]) {
      count++;
      printf("%c", str[i]);
    } else if (str[i] != str[i - 1]) {
      printf("%d", count);
      count = 0;
    }
    i++;
  }
  printf("\n");
  
  return 0;
}
