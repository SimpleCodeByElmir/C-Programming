#include "s21_cat.h"

int cat_n(char *z) {
    char *filename = z;
    FILE *fp;
    int ch = 0;
    int prev = 0;
    int i = 1;
    int ret = 0;
    if ((fp = fopen(filename, "r")) == NULL) {
        printf("Cannot open file.\n");
        ret = 1;
    }
    if (ret == 0) {
    printf("%6d\t", i);
    while ((ch = getc(fp)) != EOF) {
        if (prev == '\n') {
            i++;
            printf("%6d\t", i);
        }
        printf("%c", ch);
        prev = ch;
    }
    prev = '\0';
    ch = '\0';
    }
    if (fp != NULL)
    fclose(fp);
    return ret;
}
