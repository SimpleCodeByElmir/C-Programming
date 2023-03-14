#include "s21_cat.h"

void all_cats(int flag, int argc_from, char **argv_from) {
  int i = 2;

  while (i < argc_from) {
    if (flag == 1) {
      cat_b(argv_from[i]);
    } else if (flag == 2) {
      cat_e(argv_from[i]);
    } else if (flag == 3) {
      cat_n(argv_from[i]);
    } else if (flag == 4) {
      cat_tt(argv_from[i]);
    } else if (flag == 5) {
      cat_s(argv_from[i]);
    } else if (flag == 6) {
      cat_v(argv_from[i]);
    } else if (flag == 7) {
      cat_egnu(argv_from[i]);
    } else if (flag == 8) {
      cat_tgnu(argv_from[i]);
    }
    i++;
  }
}

int main(int argc, char **argv) {
  int w = 0, i = 2, flag = 0;

  w = getopt(argc, argv, "bentsTvE--number-nonblank--number--squeeze-blank");
  if (w == 'b' || strcmp("--number-nonblank", argv[1]) == 0) {
    flag = 1;
  } else if (w == 'e') {
    flag = 2;
  } else if (w == 'n' || strcmp("--number", argv[1]) == 0) {
    flag = 3;
  } else if (w == 't') {
    flag = 4;
  } else if (w == 's' || strcmp("--squeeze-blank", argv[1]) == 0) {
    flag = 5;
  } else if (w == 'v') {
    flag = 6;
  } else if (w == 'E') {
    flag = 7;
  } else if (w == 'T') {
    flag = 8;
  }

  if (flag == 0 && argc > 1) {
    i = 1;
    while (i < argc) {
      cat(argv[i]);
      i++;
    }
  } else {
    all_cats(flag, argc, argv);
  }

  return 0;
}
