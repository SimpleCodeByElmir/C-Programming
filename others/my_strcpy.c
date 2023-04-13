#include <stdio.h>
#include <stdlib.h>

char* my_strcpy(char* a, char* b);

int main() {

    char* a = "Hello";
    char* b = "World!";
    /*char* c = */printf("%s\n", my_strcpy(a,b));
    //printf("%s\n", c);

    return 0;
}

char* my_strcpy(char* a, char* b) {
    char *c = malloc(1*sizeof(char));
    int count = 0;
    int i = 0;
    while (a[count] != '\0') {
        c[count] = a[count];
        count++;
    }
    while (b[i] != '\0') {
        c[count] = b[i];
        count++;
        i++;
    }
    return c;
}
