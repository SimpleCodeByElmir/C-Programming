#include <stdio.h>

int my_strcompare(char *a, char *b) {

  int i = 0;
  int ret = 0;

  while (a[i] != '\0') {
    if (a[i] == b[i]) {
      i++;
    } else {
      ret = 1;
      break;
    }
  }

  return ret;
}




int main() {

  char *a = "Hello";
  char *b = "Hllo";
  if (my_strcompare(a, b) == 0) {
    printf("%s\n", a);
  } else {
    printf("NOT EQUAL\n");
  }
  return 0;
}
