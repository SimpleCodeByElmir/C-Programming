#include "s21_grep.h"

int main(int argc, char **argv) {
    int w = 0, i = 3, flag = 0;
    int u = 2;
    
    w = getopt(argc, argv, "cenovishl");
    if (w == 'c') {
        flag = 1;
    }
    else if (w == 'e') {
        flag = 2;
    }
    else if (w == 'n') {
        flag = 3;
    }
    else if (w == 'o') {
        flag = 4;
    }
    else if (w == 'v') {
        flag = 5;
    }
    else if (w == 'i') {
        flag = 6;
    }
    else if (w == 's') {
        flag = 7;
    }
    else if (w == 'h') {
        flag = 8;
    }
    else if (w == 'l') {
        flag = 9;
    }
    
    if (flag != 0) {
        char *str = argv[i-1];
        while (i < argc) {
            if (flag == 1) {
                grep_c(argv[i], str, argc);
            }
            else if (flag == 2) {
                grep_e(argv[i], str, argc);
            }
            else if (flag == 3) {
                grep_n(argv[i], str, argc);
            }
            else if (flag == 4) {
                grep_o(argv[i], str, argc);
            }
            else if (flag == 5) {
                grep_v(argv[i], str, argc);
            }
            else if (flag == 6) {
                grep_i(argv[i], str, argc);
            }
            else if (flag == 7) {
                grep_s(argv[i], str, argc);
            }
            else if (flag == 8) {
                grep_h(argv[i], str);
            }
            else if (flag == 9) {
                grep_l(argv[i], str);
            }
            i++;
        }
    }
    
    if (flag == 0 && argc > 1) {
    char *str2 = argv[u-1];
        while (u < argc) {
            grep(argv[u], str2, argc);
            u++;
        }
    }
    return 0;
}
