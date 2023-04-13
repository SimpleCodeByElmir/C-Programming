#include <stdio.h>
    
int my_strcompare(char *a, char* b);


int main() {
    
    char* a = "Hello";
    char* b = "Hllo";
    int c = my_strcompare(a,b);
    if (c == 0) {
        printf("%s\n", a);
    }
    if (c == 1) {
        printf("NOT EQUAL\n");
    }
    return 0;
}


int my_strcompare(char *a, char* b) {
    int count = 0;
    int flag = 0;
    while (a[count] != '\0') {
        if (a[count] == b[count]) {
            count++;
        }
        else {
            flag = 1;
            break;
        }
    }
    return flag;
    }
