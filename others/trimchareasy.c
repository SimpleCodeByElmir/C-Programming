//Copyright E M 2022

#include <stdio.h>
#include <stdlib.h>

// I did in FULLY by myself !

//void *trim(const char *src, const char *trim_chars)

char *eq(char *src, char *b) {
	int i = 0;
	int m = 0;
	char *a = (char*)malloc(20);

	while(src[i] != '\0') {
		
		if (src[i] != *b) {
			a[m] = src[i];
			m++;
		}
		i++;
	}
	return a;
}

int main() {
	char *a = "***Hello***";
	char *b= "*";

	char *m = eq(a,b);

	printf("%s\n", m);

	return 0;

}
