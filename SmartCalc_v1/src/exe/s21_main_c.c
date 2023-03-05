#include "s21_smartcalc.h"

void main_c(char *inp, char *result_str, int *res_ptr) {
  char *ball_str = (char *)malloc(4000 * sizeof(char));
  double result_dble = 0.0;
  int func_res = 0;  // initialize new variable here, coz wouldn't be "safe" to
                     // use *res_ptr from 'main()'. The caller may assign any
                     // value for *res_ptr, but we need it to be exactly 0.
  int *ptr_funcres = &func_res;

  if (ball_str == NULL) {
    strcpy(result_str, "Memory error (malloc).");
    *res_ptr = -1;
  } else {
    basic_errors(inp, ball_str, ptr_funcres);
    if (func_res == 0) {
      simplifier(inp, ball_str, ptr_funcres);
      if (func_res == 0) {
        postfix_converter(ball_str, ball_str, ptr_funcres);
        if (func_res == 0) {
          result_dble = calculator(ball_str, ptr_funcres);
          if (func_res == 0) {
            rounding(result_dble, ball_str, ptr_funcres);
          }
        }
      }
    }

    *res_ptr = func_res;
    strcpy(result_str, ball_str);
    free(ball_str);
  }
}
