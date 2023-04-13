#include <stdio.h>

char* my_strtok(char *a, char *b); 

int main() {

    char* a = "Hello, hey, How";
    char* b = " ";
    my_strtok(a, b);

    return 0;
}

char* my_strtok(char *a, char *b) {

    int count = 0;
    int flag = 0;
    while (a[count] != '\0') {
        flag = 0;
        if (a[count] == *b) {
            printf("\n");
            flag = 1;
        }
    if (flag == 0) {
    printf("%c", a[count]);
    }
    count++;
    }

    return a;
}
