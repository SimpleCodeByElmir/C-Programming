#include "s21_smartcalc.h"

double operation(char c, double a, double b) {
  double res = 0;

  if (c == '$') {
    res = 0 - a;
  } else if (c == '@') {
    res = 0 + a;
  } else if (c == '+') {
    res = a + b;
  } else if (c == '-') {
    res = a - b;
  } else if (c == '*') {
    res = a * b;
  } else if (c == '^') {
    res = pow(a, b);
  } else if (c == 'c') {
    res = cos(a);
  } else if (c == 's') {
    res = sin(a);
  } else if (c == 't') {
    res = tan(a);
  } else if (c == 'o') {
    res = acos(a);
  } else if (c == 'i') {
    res = asin(a);
  } else if (c == 'k') {
    res = atan(a);
  } else if (c == 'q') {
    res = sqrt(a);
  } else if (c == 'n') {
    res = log(a);
  } else if (c == 'g') {
    res = log10(a);
  }
  return res;
}

/* example: "1 2 s+3 $c2 5 m*4 /+5 -" == 1+sin(2)+cos(-3)*(2mod5)/4-5 */
double calculator(char *out, int *func_res) {
  int i = 0, p = 0, q = 0;
  double mass[200] = {0};
  char *temp = (char *)malloc(253 * sizeof(char));
  memset(temp, 0, 253);

  if (temp == NULL) {
    strcpy(out, "Memory error (malloc).");
    *func_res = -1;
  } else {
    while (out[i] != '\0') {
      p = 0;
      while (out[i] != ' ' &&
             (strcheck(out[i], "+-/^*$@mcstoikqng") == 0)) {  // get number
        temp[p] = out[i];
        p++;
        i++;
      }
      if (out[i] == ' ') {
        while (out[i + 1] == ' ') {  // skip extra spaces
          p++;
          i++;
        }
        temp[p] = '\0';
        mass[q] = atof(temp);  // convert from string to double
        temp[0] = '\0';        // empty the string
        q++;
      } else if (strcheck(out[i], "$@cstoikqng") == 1) {
        mass[q - 1] = operation(out[i], mass[q - 1], 0);
      } else if (strcheck(out[i], "+-^*") == 1) {
        mass[q - 2] = operation(out[i], mass[q - 2], mass[q - 1]);
        q--;
      } else if (out[i] == '/' || out[i] == 'm') {
        if (mass[q - 1] == 0) {
          *func_res = -1;
          mass[0] = 0.0;
          strcpy(out, "*error: divison/mod by zero.");
          break;
        } else if (out[i] == '/') {
          mass[q - 2] = mass[q - 2] / mass[q - 1];
        } else {
          if ((isDouble(mass[q - 2]) == 1) || (isDouble(mass[q - 1]) == 1)) {
            mass[q - 2] = fmod(mass[q - 2], mass[q - 1]);
          } else {
            mass[q - 2] =
                ((int)mass[q - 2] % (int)mass[q - 1] + (int)mass[q - 1]) %
                (int)mass[q - 1];
          }
        }
        q--;
      }
      i++;
    }
    free(temp);
  }
  return mass[0];
}

double graph_calculator(char *out, int *func_res) {
  int i = 0, p = 0, q = 0;
  double mass[200] = {0};
  char *temp = (char *)malloc(253 * sizeof(char));
  memset(temp, 0, 253);

  if (temp == NULL) {
    strcpy(out, "Memory error (malloc).");
    *func_res = -1;
  } else {
    while (out[i] != '\0') {
      p = 0;
      while (out[i] != ' ' &&
             (strcheck(out[i], "+-/^*$@mcstoikqng") == 0)) {  // get number
        temp[p] = out[i];
        p++;
        i++;
      }
      if (out[i] == ' ') {
        while (out[i + 1] == ' ') {  // skip extra spaces
          p++;
          i++;
        }
        temp[p] = '\0';
        mass[q] = atof(temp);  // convert from string to double
        temp[0] = '\0';        // empty the string
        q++;
      } else if (strcheck(out[i], "$@cstoikqng") == 1) {
        mass[q - 1] = operation(out[i], mass[q - 1], 0);
      } else if (strcheck(out[i], "+-^*") == 1) {
        mass[q - 2] = operation(out[i], mass[q - 2], mass[q - 1]);
        q--;
      } else if (out[i] == '/' || out[i] == 'm') {
        if (out[i] == '/') {
          mass[q - 2] = mass[q - 2] / mass[q - 1];
        } else {
          mass[q - 2] = fmod(mass[q - 2], mass[q - 1]);
        }
        q--;
      }
      i++;
    }
    free(temp);
  }
  return mass[0];
}
