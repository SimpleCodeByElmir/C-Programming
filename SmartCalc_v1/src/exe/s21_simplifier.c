#include "s21_smartcalc.h"

#define if_malloc_er                       \
  if (str2 == NULL) {                      \
    ret = -1;                              \
    strcpy(ptr, "Memory error (malloc)."); \
  }

#define other_chars    \
  else {               \
    str2[p] = str1[i]; \
    p++;               \
  }

#define err   \
  free(str2); \
  ret = -1;   \
  str2 = "*error: grammar, type: ccossln/no'('.";

#define if_ret_break \
  if (ret == -1) {   \
    break;           \
  }

#define end_func       \
  if (ret == 0) {      \
    str2[p] = '\0';    \
    strcpy(ptr, str2); \
    free(str2);        \
  } else {             \
    strcpy(ptr, str2); \
  }                    \
  *func_res = ret;

void math_things_1(char *str1, char *ptr, int *func_res) {  // mod
  int p = 0, i = 0, ret = 0;
  char *str2 = (char *)malloc(4000 * sizeof(char));
  if_malloc_er;

  if (ret == 0) {
    while (str1[i] != '\0') {
      if (str1[i] == 'm') {
        if (strcheck(str1[i - 1], "0123456789)") == 0) {
          free(str2);
          ret = -1;
          str2 = "*error: expected number before 'mod'";
        } else if (strcheck(str1[i + 3], "0123456789(") == 0) {
          if (str1[i + 3] == '-') {
            free(str2);
            ret = -1;
            str2 = "*error: 'mod-' --> put '('";
          } else {
            err;
          }
        } else if (str1[i + 1] == 'o' && str1[i + 2] == 'd') {
          str2[p] = 'm';  // 'm' instead of "mod"
          p++;
          i = i + 2;  // itterate counter to skip this "mod" letters.
        } else {
          err;
        }
      }
      other_chars;
      if_ret_break;
      i++;
    }
    end_func;
  }
}

void math_things_2(char *str1, char *ptr, int *func_res) {  // ln log )( 1(
  int p = 0, i = 0, ret = 0;
  char *str2 = (char *)malloc(4000 * sizeof(char));
  if_malloc_er;

  if (ret == 0) {
    while (str1[i] != '\0') {
      if (strcheck(str1[i], "0123456789)") == 1) {
        str2[p] = str1[i];
        p++;
        if (strcheck(str1[i + 1], "(acstl") == 1) {
          str2[p] = '*';
          p++;
        }
      } else if (str1[i] == 'l') {
        if ((i != 0 && strcheck(str1[i - 1], "*+-/)(^0123456789") == 1) ||
            (i == 0 && str1[i] == 'l')) {
          if (str1[i + 1] == 'n' && str1[i + 2] == '(') {
            str2[p] = 'n';  // 'n' instead of "ln"
            p++;
            i = i + 1;
          } else if (str1[i + 1] == 'o' && str1[i + 2] == 'g' &&
                     str1[i + 3] == '(') {
            str2[p] = 'g';  // 'g' instead of "log"
            p++;
            i = i + 2;
          } else {
            err;
          }
        } else {
          err;
        }
      }
      other_chars;
      if_ret_break;
      i++;
    }
    end_func;
  }
}

#define bracket_i4 str1[i + 4] == '('
#define bracket_i3 str1[i + 3] == '('
#define skip_i3 \
  i = i + 3;    \
  p++;
#define skip_i2 \
  i = i + 2;    \
  p++;
#define if_no_operator                                             \
  if (i != 0 && strcheck(str1[i - 1], "*+-/)(^0123456789") == 0) { \
    err;                                                           \
  }
#define else_err \
  else {         \
    err;         \
  }

void math_things_3(char *str1, char *ptr, int *func_res) {
  int p = 0, i = 0, ret = 0;
  char *str2 = (char *)malloc(4000 * sizeof(char));
  if_malloc_er;

  if (ret == 0) {
    while (str1[i] != '\0') {
      if (str1[i] == 'a') {
        if_no_operator else {
          if (str1[i + 1] == 'c' && str1[i + 2] == 'o' && str1[i + 3] == 's' &&
              bracket_i4) {
            str2[p] = 'o';  // 'o' instead of "acos"
            skip_i3;        // itterate counter to skip this "acos" letters.
          } else if (str1[i + 1] == 's' && str1[i + 2] == 'i' &&
                     str1[i + 3] == 'n' && bracket_i4) {
            str2[p] = 'i';
            skip_i3;
          } else if (str1[i + 1] == 't' && str1[i + 2] == 'a' &&
                     str1[i + 3] == 'n' && bracket_i4) {
            str2[p] = 'k';
            skip_i3;
          }
        }
      } else if (str1[i] == 'c') {
        if (str1[i + 1] == 'o' && str1[i + 2] == 's' && bracket_i3) {
          if_no_operator else {
            str2[p] = 'c';
            skip_i2;
          }
        }
        else_err;
      } else if (str1[i] == 's') {
        if (str1[i + 1] == 'i' && str1[i + 2] == 'n' && bracket_i3) {
          if_no_operator else {
            str2[p] = 's';
            skip_i2;
          }
        } else if (str1[i + 1] == 'q' && str1[i + 2] == 'r' &&
                   str1[i + 3] == 't' && bracket_i4) {
          str2[p] = 'q';
          skip_i3;
        }
        else_err;
      } else if (str1[i] == 't') {
        if (str1[i + 1] == 'a' && str1[i + 2] == 'n' && bracket_i3) {
          if_no_operator else {
            str2[p] = 't';
            skip_i2;
          }
        }
        else_err;
      }
      other_chars;
      if_ret_break;
      i++;
    }
    end_func;
  }
}

void simplifier(char *str1, char *ptr, int *func_res) {
  char *temp = (char *)malloc(4000 * sizeof(char));

  if (temp == NULL) {
    strcpy(ptr, "Memory error (malloc).");
    *func_res = -1;
  } else {
    math_things_1(str1, temp, func_res);
    if (*func_res == 0) {
      math_things_2(temp, temp, func_res);
      if (*func_res == 0) {
        math_things_3(temp, temp, func_res);
      }
    }

    if (*func_res == 0) {
      if (funcserrors(temp) == 0) {
        strcpy(ptr, temp);
      } else {
        strcpy(ptr, "*error: funcs. (example: tancos2)");
        *func_res = -1;
      }
    } else {
      strcpy(ptr, temp);
    }
    free(temp);
  }
}
