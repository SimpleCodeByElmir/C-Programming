#include "s21_cat.h"

int main(int argc, char **argv) {
    int w = 0, i = 2, flag = 0;
    int k = 0, y = 0, r = 0;
    char *m = "--number-nonblank";
    char *n = "--number";
    char *j = "--squeeze-blank";
    
    if (argc > 1) {
        k = strcmp(m, argv[1]);
        y = strcmp(n, argv[1]);
        r = strcmp(j, argv[1]);
    }
    
    w = getopt(argc, argv, "bentsTvE");
    if (w == 'b' || k == 0) {
        flag = 1;
    }
    else if (w == 'e') {
        flag = 2;
    }
    else if (w == 'n' || y == 0) {
        flag = 3;
    }
    else if (w == 't') {
        flag = 4;
    }
    else if (w == 's' || r == 0) {
        flag = 5;
    }
    else if (w == 'v') {
        flag = 6;
    }
    else if (w == 'E') {
        flag = 7;
    }
    else if (w == 'T') {
        flag = 8;
    }
    
    if (flag != 0) {
        while (i < argc) {
            if (flag == 1) {
                cat_b(argv[i]);
            }
            else if (flag == 2) {
                cat_e(argv[i]);
            }
            else if (flag == 3) {
                cat_n(argv[i]);
            }
            else if (flag == 4) {
                cat_tt(argv[i]);
            }
            else if (flag == 5) {
                cat_s(argv[i]);
            }
            else if (flag == 6) {
                cat_v(argv[i]);
            }
            else if (flag == 7) {
                cat_egnu(argv[i]);
            }
            else if (flag == 8) {
                cat_tgnu(argv[i]);
            }
            i++;
        }
    }
    
    if (flag == 0 && argc > 1) {
        int u = 1;
        while (u < argc) {
            cat(argv[u]);
            u++;
        }
    }
    return 0;
}
