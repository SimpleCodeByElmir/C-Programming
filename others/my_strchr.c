#include <stdio.h>

char* my_strchr(char* a, int c);

int main() {

    char *a = "Hello";
    char *b = my_strchr(a, 'l');

    return 0;
}

char* my_strchr(char* a, int c) {

    int count = 0;
    int flag = 0;

    while (a[count] != '\0') {
        if (a[count] == (char)c) {
            while (a[count] != '\0') {
                printf("%c", a[count]);
                count++;
            }
            flag = 1;
            break;
        }
        count++;
    }
    if (flag == 1)
        printf("\n");

    return a;
}
