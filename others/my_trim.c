#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_trim(char *str, char *trim_chars) {
  
  int flag = 0;

  /* searching for any trim_char in the str -> if found one, then flag = 1 */
  for (int p = 0; str[p] != '\0'; p++) {
    if (flag == 1) {    // break the loop if found a trim_char and go to the next stage
      break;
	}
      for (int j = 0; trim_chars[j] != '\0' && flag == 0; j++) {
        if (str[p] == trim_chars[j]) {
	      flag = 1;
	    }
	  }
  }

  if (flag == 1) {
	char ret[strlen(str)];
    int k = 0;
	int write = 1;
    for (int i=0; str[i] != '\0'; i++) {
	  write = 1;
      for (int j = 0; trim_chars[j] != '\0'; j++) {
        if (str[i] == trim_chars[j]) {
		  write = 0;       // 0 == false
		  break;
	    }
      }
	  if (write == 1) {        // do write if true
        ret[k] = str[i];
        k++;
	  }
    }

  ret[k] = '\0';
  strcpy(str, ret);
  }

  return str;
}

int main() {

  char str[50] = "***Hell o***###Hello###***"; // original string

  // creating copy of orgininal string for to work safely
  char *res = malloc(sizeof(str));
  strcpy(res, str);

  res = my_trim(res, "*#");
  printf("%s\n", res);

  free(res);
  return 0;
}
