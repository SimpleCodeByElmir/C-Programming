#include <stdio.h>
#include <string.h>

char* my_strtok(char *a, char *b) {
    
    return a;
}

int main() {

    char a[50] = "Hello, hey, How";
    char *b = strtok(a, " ");
	while (b != NULL) {
	  printf("%s\n", b);
	  b = strtok(NULL, " ");
	}
    return 0;
}
