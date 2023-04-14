#include <stdio.h>

int main() {
  char str[500];
  scanf("%s", str);  

  int i = 0;
  while (str[i] != '\0') {
    if (str[i] > 'A' && str[i] < 'Z') {
	  printf("_%c", str[i] | 32 );
	} else {
	  printf("%c", str[i]);
	}
	i++;
  }
  printf("\n");
  return 0;
}
