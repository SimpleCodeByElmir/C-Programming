#include "s21_grep.h"

void all_options(int flag, int argc_from, char **argv_from) {
  int i = 3;

  char *str = argv_from[i - 1];
  while (i < argc_from) {
    if (flag == 1) {
      grep_c(argv_from[i], str, argc_from);
    } else if (flag == 2) {
      grep_e(argv_from[i], str, argc_from);
    } else if (flag == 3) {
      grep_n(argv_from[i], str, argc_from);
    } else if (flag == 4) {
      grep_o(argv_from[i], str, argc_from);
    } else if (flag == 5) {
      grep_v(argv_from[i], str, argc_from);
    } else if (flag == 6) {
      grep_i(argv_from[i], str, argc_from);
    } else if (flag == 7) {
      grep_s(argv_from[i], str, argc_from);
    } else if (flag == 8) {
      grep_h(argv_from[i], str);
    } else if (flag == 9) {
      grep_l(argv_from[i], str);
    }
    i++;
  }
}

int main(int argc, char **argv) {
  int w = 0, flag = 0;

  w = getopt(argc, argv, "cenovishl");
  if (w == 'c') {
    flag = 1;
  } else if (w == 'e') {
    flag = 2;
  } else if (w == 'n') {
    flag = 3;
  } else if (w == 'o') {
    flag = 4;
  } else if (w == 'v') {
    flag = 5;
  } else if (w == 'i') {
    flag = 6;
  } else if (w == 's') {
    flag = 7;
  } else if (w == 'h') {
    flag = 8;
  } else if (w == 'l') {
    flag = 9;
  }

  if (flag == 0 && argc > 1) {
    int i = 2;
    char *str2 = argv[i - 1];
    while (i < argc) {
      grep(argv[i], str2, argc);
      i++;
    }
  } else {
    all_options(flag, argc, argv);
  }
  return 0;
}
