#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This calculator converts infix notation expression ("1+2*3/(4-5)"),
 to postfix and calculates the result (in "Radians" for trigonometric funcs).
                   Author: Elmir Musaev. */

/*main functions*/
void main_c(char *inp, char *result_str,
            int *res_ptr);  // calls all main functions.
void basic_errors(char *out, char *ptr,
                  int *func_res);  // finds basic mistakes that a user can make.
void simplifier(char *str1, char *ptr,
                int *func_res);  // shortens the trigonometric funcs: sin = s,
                                 // mod = m and etc.
void postfix_converter(char *inp, char *ptr,
                       int *func_res);  // converts infix-written expression to
                                        // postfix: 1+2 == 1 2 + .
double calculator(char *out,
                  int *func_res);  // simply calculates and returns the result.
void rounding(double a, char *ptr,
              int *func_res);  // rounds the arg1 with precision ~7-8 digits
                               // after dot and writes the result in *ptr.
void graph_main_c(char *inp, char *result_str,
                  int *res_ptr);  // graph-draw.
double graph_calculator(
    char *out,
    int *func_res);  // simply calculates and returns the result.

/*helpers*/
int check_x(char *str);           // checks if 'x' is valid number.
int strcheck(char c, char *str);  // find if arg1(c) in the 'str'.
int isDouble(double a);           // checks if 'a' is a double or it's not.
int funcserrors(char *inp);  // finds errors after 'simplifier' function, like:
                             // 1+ss == must be 1+s(s(4... == 1+sin(sin(4... .

/*files
s21_smartcalc.h
s21_main_c.c
s21_graph_main_c.c
s21_basic_errors.c
s21_simplifier.c
s21_converter.c
s21_calculator.c
s21_rounding.c
s21_helpers.c
*/

#endif /*SRC_S21_SMARTCALC_H_*/
