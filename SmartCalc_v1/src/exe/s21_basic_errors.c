#include "s21_smartcalc.h"

#define ret_1 ret = -1;
#define if_ret_break \
  if (ret == -1) {   \
    break;           \
  }

void often_errors(char *out, char *ptr, int *func_res) {
  int ret = 0, i = 0, count1 = 0, count2 = 0, count3 = 0;

  if (strcheck(out[0], "/^*.)m,") == 1 ||
      out[0] == '\0') {  // "error type: "*2+2"
    strcpy(ptr, "*error: check the first char.");
    ret = -1;
  } else {
    while (out[i] != '\0') {
      if (strcheck(out[i], "acdgilmnoqrst/+*-.()^0123456789") == 0) {
        strcpy(ptr, "*error: unknown symbol.");
        ret_1;
      } else if (strcheck(out[i], "acdgilmnoqrst/+*-^") == 1) {
        count3++;
      } else if (out[i] == '(') {
        count1++;
      } else if (out[i] == ')') {
        count2++;
      }
      if (out[i + 1] == '\0') {  // error type: 1+2+ , 1+2+F
        if (strcheck(out[i], "*+-/^(.") == 1) {
          strcpy(ptr, "*error: check the last character.");
          ret_1;
        }
      }
      if_ret_break;
      i++;
    }
  }

  if (ret == 0) {
    if (count1 != count2) {  // parentheses equality check
      strcpy(ptr, "*error: parentheses.");
      ret = -1;
    } else if (count3 == 0) {
      strcpy(ptr, out);
      ret = 2;
    }
  }
  *func_res = ret;
}

void operator_errors(char *out, char *ptr, int *func_res) {
  int ret = 0, i = 0;

  while (out[i] != '\0') {
    if (out[i] == '(') {
      if (out[i + 1] == ')') {
        strcpy(ptr, "*error: --> '()'");
        ret_1;
      } else if (strcheck(out[i + 1], "/^*") == 1) {
        strcpy(ptr, "*error: (/^*");
        ret_1;
      }
    } else if (out[i] == ')') {
      if (strcheck(out[i - 1], "acdgilmnoqrst") == 1) {
        strcpy(ptr, "*error: grammar, type: sin)");
        ret_1;
      }
    } else if (strcheck(out[i], "*+-/^.") == 1 &&
               strcheck(out[i + 1], "*+-/^.") == 1) {
      strcpy(ptr, "*error: two operators/dots, type: *+/.. .");
      ret_1;
    } else if (strcheck(out[i], "*+-/^.") == 1 &&
               strcheck(out[i + 1], ")") == 1) {
      strcpy(ptr, "*error:  operator)");
      ret_1;
    } else if (out[i] == '.') {  // error type: 1+2.3. (two dots in a number)
      if (out[i + 1] == '(' || out[i - 1] == '(') {
        strcpy(ptr, "*error: (.(");
        ret_1;
      } else {
        int s = i;
        while (strcheck(out[s], "*+-/^m()") == 0 && out[s] != '\0') {
          s++;
          if (out[s] == '.') {
            strcpy(ptr, "*error: two dots, type: 5.4.3");
            ret_1;
          }
        }
      }
    }
    if_ret_break;
    i++;
  }
  *func_res = ret;
}

void grammar_errors(char *out, char *ptr, int *func_res) {
  int ret = 0, i = 0;

  while (out[i] != '\0') {
    if (i == 0 && (strcheck(out[i], "nrqgido") == 1)) {  // error type: q(60)
      strcpy(ptr, "*error: grammar, type: n(2)");
      ret_1;
    } else if (out[i] == 'o') {
      if ((out[i - 1] != 'm' || out[i + 1] != 'd') &&
          (out[i - 1] != 'c' || out[i + 1] != 's') &&
          ((out[i - 2] != 'a' || out[i - 1] != 'c') && out[i + 1] != 's') &&
          (out[i - 1] != 'l' || out[i + 1] != 'g')) {
        strcpy(ptr, "*error: grammar, type: 4oi2");
        ret_1;
      }
    } else if (out[i] == 'd') {
      if (out[i - 1] != 'o' && out[i - 2] != 'm') {
        strcpy(ptr, "*error: grammar, type: *dr2");
        ret_1;
      }
    } else if (out[i] == 'i') {
      if ((out[i - 1] != 's' || out[i + 1] != 'n') &&
          (out[i - 2] != 'a' || out[i + 1] != 'n')) {
        strcpy(ptr, "*error: grammar, type: 1i2");
        ret_1;
      }
    } else if (out[i] == 'g') {
      if (out[i - 2] != 'l' || out[i - 1] != 'o') {
        strcpy(ptr, "*error: grammar, type: +g2");
        ret_1;
      }
    } else if (out[i] == 'n') {
      if (out[i - 1] != 'l') {
        if (((out[i - 1] != 'a' && out[i - 2] == 't') &&
             (out[i - 1] != 'a' && out[i - 2] == 't' && out[i - 3] == 'a')) ||
            ((out[i - 1] != 'i' && out[i - 2] == 's') ||
             (out[i - 1] != 'i' && out[i - 2] == 's' && out[i - 3] == 'a')) ||
            (strcheck(out[i - 1], "*+-./^(n0123456789") == 1)) {
          strcpy(ptr, "*error: grammar, type: 1n2");
          ret_1;
        }
      }
    } else if (out[i] == 'q') {
      if ((out[i - 1] != 's' || out[i + 1] != 'r' || out[i + 2] != 't')) {
        strcpy(ptr, "*error: grammar, type: 2q2");
        ret_1;
      }
    } else if (out[i] == 'r') {
      if (out[i - 1] != 'q' || out[i - 2] != 's' || out[i + 1] != 't') {
        strcpy(ptr, "*error: grammar, type: 3r2");
        ret_1;
      }
    }
    if_ret_break;
    i++;
  }
  *func_res = ret;
}

void basic_errors(char *out, char *ptr, int *func_res) {
  often_errors(out, ptr, func_res);
  if (*func_res == 0) {
    operator_errors(out, ptr, func_res);
    if (*func_res == 0) {
      grammar_errors(out, ptr, func_res);
    }
  }
}
