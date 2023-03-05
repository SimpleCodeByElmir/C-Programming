#include "s21_smartcalc.h"

int check_x(char *str) {
  int ret = 0;
  int i = 0;
  int dot = 0;

  if (str[i] != '\0' && strlen(str) < 25) {
    if ((str[i] == '+' || str[i] == '-') &&
        str[i + 1] != '\0') {  // check for a sign.
      i++;
    }
    while (str[i] != '\0') {
      if (str[i] == '.') {
        if (i == 0) {
          ret = -1;
        } else if (str[i + 1] == '.' || str[i + 1] == '\0') {
          ret = -1;
        } else if (i == 1 && (str[i - 1] == '-' || str[i - 1] == '+')) {
          ret = -1;
        } else {
          dot++;
        }
      }
      if (strcheck(str[i], ".0123456789") == 0 || dot > 1) {
        ret = -1;
      }
      if (ret == -1) {
        break;
      }
      i++;
    }
  } else {
    ret = 2;
  }
  return ret;
}

int isDouble(double a) {
  int ret = 0, i = 0, z = 0;
  char b[50];

  sprintf(b, "%.8f", a);
  while (b[i] != '\0') {
    if (b[i] == '.') {  // parsing after 'dot' digits: if only zeros till b[7],
                        // then integer will be printed, else float.
      i++;
      while (z < 7) {
        if (b[i] != '0') {
          ret = 1;  // means, that not all following 'after dot' digits are
                    // zeroes. Float will be printed.
          break;
        }
        i++;
        z++;
      }
      if (ret == 1) {
        break;
      }
    }
    i++;
  }
  return ret;
}

int strcheck(char c, char *str) {
  int i = 0;
  int ret = 0;
  while (str[i] != '\0') {
    if (str[i] == c) {
      ret = 1;
      break;
    }
    i++;
  }
  return ret;
}

int funcserrors(char *inp) {
  int i = 0;
  int ret = 0;
  while (inp[i] != '\0') {
    if ((strcheck(inp[i], "cstoikqng") == 1)) {
      if (inp[i + 1] != '(') {
        if ((strcheck(inp[i + 1], "cstoikqng") == 1)) {
          ret = -1;
          break;
        }
      }
    }
    i++;
  }
  return ret;
}
