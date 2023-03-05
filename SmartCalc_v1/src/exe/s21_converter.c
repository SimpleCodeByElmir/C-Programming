#include "s21_smartcalc.h"

char stack[530];
int top = 0;
int stack_err = 0;

void push(char c) {
  if (top > 530) {
    stack_err = -1;
  }
  top++;
  stack[top] = c;
}

char peek() {
  if (top == -1) {
    stack_err = -1;
  }
  char val = stack[top];
  return val;
}

char pop() {
  if (top == -1) {
    stack_err = -1;
  }
  char val = stack[top];
  top--;
  return val;
}

int priority(char c) {
  int ret = -1;
  if (c == '(') {
    ret = 0;
  } else if (c == '+' || c == '-') {
    ret = 1;
  } else if (c == '*' || c == '/') {
    ret = 2;
  } else if (c == 'm') {
    ret = 3;
  } else if (c == '^') {
    ret = 4;
  } else if (strcheck(c, "cstoikqng") == 1) {
    ret = 5;
  } else if (c == '$' || c == '@') {
    ret = 6;
  }
  return ret;
}

void space_numbers(char *inp, char *out, int *func_res) {
  int i = 0, p = 0;
  char *temp = (char *)malloc(4000 * sizeof(char));

  if (temp == NULL) {
    strcpy(out, "Memory error (malloc).");
    *func_res = -1;
  } else {
    while (inp[i] == ' ') {
      i++;
    }

    while (inp[i] != '\0') {
      if (i != 0 && strcheck(inp[i - 1], "0123456789") == 1 &&
          strcheck(inp[i], "*+-/^mcstoikqng@$") == 1) {
        temp[p] = ' ';
        p++;
      } else if (i != 0 && strcheck(inp[i - 1], "*+-/^mcstoikqng@$") == 1 &&
                 inp[i] == ' ') {
        i++;
      }
      if (inp[i] == ' ' && strcheck(inp[i - 1], "0123456789") == 0) {
        i++;
      }
      temp[p] = inp[i];
      i++;
      p++;
    }
    temp[p] = '\0';
    strcpy(out, temp);
    free(temp);
  }
}

void plusminus(char *inp, char *out, int *func_res) {
  int i = 0, p = 0;
  char *temp = (char *)malloc(4000 * sizeof(char));

  if (temp == NULL) {
    strcpy(out, "Memory error (malloc).");
    *func_res = -1;
  } else {
    if (inp[i] == '-') {  // if first char in expression is '+' or '-'
      inp[i] = '$';
      push(inp[i]);
    }
    if (inp[i] == '+') {
      inp[i] = '@';
      push(inp[i]);
    }

    while (inp[i] != '\0') {
      if (inp[i] == '(') {
        if (inp[i + 1] == '-') {
          inp[i + 1] = '$';
          push(inp[i + 1]);
        } else if (inp[i + 1] == '+') {
          inp[i + 1] = '@';
          push(inp[i + 1]);
        }
      }
      temp[p] = inp[i];
      i++;
      p++;
    }
    temp[p] = '\0';
    stack[0] = '\0';
    top = 0;
    strcpy(out, temp);
    free(temp);
  }
}

#define pop_out   \
  out[p] = pop(); \
  p++;
#define space   \
  out[p] = ' '; \
  p++;
#define if_stack_err    \
  if (stack_err == 1) { \
    break;              \
  }

void postfix_converter(char *inp, char *ptr, int *func_res) {
  char *temp = (char *)malloc(4000 * sizeof(char));
  char *out = (char *)malloc(4000 * sizeof(char));
  int i = 0, p = 0, flag = 0;

  if (temp == NULL || out == NULL) {
    strcpy(out, "Memory error (malloc).");
    *func_res = -1;
  } else {
    plusminus(inp, temp, func_res);
    if (*func_res == 0) {
      while (temp[i] != '\0') {
        flag = 0;
        if (strcheck(temp[i], ".0123456789") == 1) {
          out[p] = temp[i];
          p++;
        } else if (strcheck(temp[i], "(*+-/^mcstoikqng$@") == 1) {
          if (temp[i] != '(') {
            while (priority(peek()) >= priority(temp[i]) && top != 0 &&
                   peek() != '(') {
              if (((peek() == '@' || peek() == '$') &&
                   ((stack[top - 1] == '(' || i == 1) &&
                    strcheck(temp[i], "cstoikqng") == 1)) ||
                  (temp[i] == '^' && peek() == '^')) {
                flag = 7;  // if~ (-sin(1)) or -asin(0.5) or 4^2^2
              } else if ((stack[top - 1] == '(' && stack[top - 3] == '(')) {
                pop_out;
                flag = 7;  // if~ (@($(3+5+8)))
              }
              if (flag == 7) {
                break;
              }
              pop_out;
            }
          }
          flag = 1;
          push(temp[i]);
        } else if (temp[i] == ')') {
          while (top != 0 && peek() != '(') {
            pop_out;
          }
          flag = 1;
          pop();
        }
        if_stack_err;
        if (i != 0 && flag == 1 && temp[i] != '(' && temp[i - 1] != '(' &&
            temp[i - 1] != ')') {
          space;
        }
        i++;
      }

      while (top != 0) {
        if_stack_err;
        pop_out;
      }
      *func_res = stack_err;
      if (stack_err == 0) {
        out[p] = '\0';
        space_numbers(out, temp, func_res);
        if (*func_res == 0) {
          strcpy(ptr, temp);
        }
      } else {
        strcpy(ptr, "*error: check operators/funcs.");
      }
      free(temp);
      free(out);
    }
  }
}
