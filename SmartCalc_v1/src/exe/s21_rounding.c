#include "s21_smartcalc.h"

void trail_zero(char *b, char *ptr, int *func_res) {
  char *temp = (char *)malloc(500 * sizeof(char));
  if (temp == NULL) {
    strcpy(ptr, "Memory error (malloc).");
    *func_res = -1;
  } else {
    strcpy(temp, b);
    int i = strlen(b);
    i = i - 1;
    int flag = 0;

    while (b[i] == '0') {
      i = i - 1;
      flag = 1;
    }
    if (flag == 1) {
      i = i + 1;
      temp[i] = '\0';
    }
    strcpy(ptr, temp);
    free(temp);
  }
}

void after_dot(char *b, char *ptr, int *func_res) {
  char *temp = (char *)malloc(500 * sizeof(char));
  if (temp == NULL) {
    strcpy(ptr, "Memory error (malloc).");
    *func_res = -1;
  } else {
    int i = 0;
    int z = 0;
    while (b[i] != '\0') {
      if (b[i] == '.') {
        while (z < 9) {
          temp[i] = b[i];
          i++;
          z++;
        }
      }
      if (z == 0) {
        temp[i] = b[i];
      } else {
        break;
      }
      i++;
    }
    temp[i] = '\0';
    strcpy(ptr, temp);
    free(temp);
  }
}

void rounding(double a, char *ptr, int *func_res) {
  char *b = (char *)malloc(500 * sizeof(char));

  if (b == NULL) {
    strcpy(ptr, "Memory error (malloc).");
    *func_res = -1;
  } else {
    sprintf(b, "%.9f", a);
    int i = 0, z = 0, flag = 0;

    while (b[i] != '\0' && z == 0) {
      if (b[i] == '.') {  // parsing after 'dot' digits: if only zeros till
                          // b[7], then integer will be printed, else float.
        i++;
        while (z < 7) {
          if (b[i] != '0') {
            flag = 1;  // means, that not all following 'after dot' digits are
                       // zeroes. Float will be printed.
            break;
          }
          i++;
          z++;
        }
      }
      i++;
    }
    if (flag == 1) {
      char *trailed = (char *)malloc(500 * sizeof(char));
      if (trailed == NULL) {
        strcpy(ptr, "Memory error (malloc).");
        *func_res = -1;
      } else {
        after_dot(b, b, func_res);
        trail_zero(b, trailed, func_res);
        strcpy(ptr, trailed);
        free(trailed);
      }
    } else {
      sprintf(ptr, "%.0f", a);
    }
    free(b);
  }
}
