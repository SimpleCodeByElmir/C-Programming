#include <check.h>

#include "s21_smartcalc.h"

// Math result tests
START_TEST(math_result_test) {
  char str1[] = "1.055+2.045";
  char str2[] = "1+2*(3+4/2-(1+2))*2+1";
  char str3[] = "-3+4*2+(11(1+2))(3*4)";
  char str4[] = "4^3^2";
  char str5[] = "sqrt(sqrt(16))";
  char str6[] = "5+(-1+3)*4";
  char str7[] = "+1+(-2)+(+3)-4+(+5)+(-2+(+100)*(-6+7))";
  char str8[] =
      "0.2-00.03*(001.45^005.654^(0.16-001.000026765))^(-001.17+7.0*"
      "0.7)-009.000009";
  char str9[] =
      "(+0.721)+0*((-01.22)+256)+(-(0.25-00003.04433))+((+5.656)-(6."
      "21/7*2+8))-(0.3^(-5.5)+3.3^3.5)+2.21^2.8/4*(-119112)";
  char str10[] = "1+6+2*3-4-6/2+2^2+2^3^3+2^2/2*1^2";
  char str11[] =
      "1+(-2)+2*(-(3+10/"
      "5-(6+7)))+2(8+2*((+2)+3^1-3^2*(3-1)))+(-5+6+(-8+2.5^(-2)))";
  char str12[] =
      "-1*(+77)*((-3)+((-15)/1)-(-(6+7)))+((+8)+((-2)*(2+3^2^2-3^2*(3-1))))";
  char str13[] = "1+77*(3+(15/1)-(6+7))+(8+(2*(2+3^1-3^2*(3-1))))";
  char str14[] = "1*22323/3*(42344556+5)-(-8000808/2*8)";
  char str15[] = "1*0/1*(2+0)-(1/2*0)";
  char str16[] =
      "sqrt(0.2)-sqrt(00.03)*(0.45^1.654^(0.6-001.000026765))^(-001."
      "17+7.0*0.7)-sqrt(009.000009)+(-111.1234567+110.765432*((-1)+"
      "4/2*(-2)*(-(2*2+(-1.23456)))))";
  char str17[] = "0.5mod0.2+2*3mod8+1";
  char str18[] = "1+2*3^4mod5";
  char str19[] = "1+2*3^(4mod5)";
  char str20[] = "1+2*3^(4mod5)+6+7*sqrt(11)";
  char str21[] =
      "-0.1-(-00.03)*(-(001.45^005.654^(0.05-001.000026765)))/"
      "(-001.17)*(+009.000009)";
  char str22[] = "1128+((-2)mod(3+5))*10/5/2^2";
  char str23[] =
      "-(12.21+(-65)+2/(-2)-4-6/2+2^2+2^1^(-3)+(-2.2)+(-1.4448/"
      "(-2.22))*(-1)+4^(-2))";
  char str24[] =
      "-((+2.123456789+2.123456789)*3.233^(-1.2)+(000.223456)*(-"
      "0000543.00321))";
  char str25[] = "+((-(sqrt(105))))+(sqrt(16)+sqrt(221))";

  char result_str1[50];
  char result_str2[50];
  char result_str3[50];
  char result_str4[50];
  char result_str5[50];
  char result_str6[50];
  char result_str7[50];
  char result_str8[50];
  char result_str9[50];
  char result_str10[50];
  char result_str11[50];
  char result_str12[50];
  char result_str13[50];
  char result_str14[50];
  char result_str15[50];
  char result_str16[50];
  char result_str17[50];
  char result_str18[50];
  char result_str19[50];
  char result_str20[50];
  char result_str21[50];
  char result_str22[50];
  char result_str23[50];
  char result_str24[50];
  char result_str25[50];

  int res = 0;
  int *ptr_res = &res;

  main_c(str1, result_str1, ptr_res);
  main_c(str2, result_str2, ptr_res);
  main_c(str3, result_str3, ptr_res);
  main_c(str4, result_str4, ptr_res);
  main_c(str5, result_str5, ptr_res);
  main_c(str6, result_str6, ptr_res);
  main_c(str7, result_str7, ptr_res);
  main_c(str8, result_str8, ptr_res);
  main_c(str9, result_str9, ptr_res);
  main_c(str10, result_str10, ptr_res);
  main_c(str11, result_str11, ptr_res);
  main_c(str12, result_str12, ptr_res);
  main_c(str13, result_str13, ptr_res);
  main_c(str14, result_str14, ptr_res);
  main_c(str15, result_str15, ptr_res);
  main_c(str16, result_str16, ptr_res);
  main_c(str17, result_str17, ptr_res);
  main_c(str18, result_str18, ptr_res);
  main_c(str19, result_str19, ptr_res);
  main_c(str20, result_str20, ptr_res);
  main_c(str21, result_str21, ptr_res);
  main_c(str22, result_str22, ptr_res);
  main_c(str23, result_str23, ptr_res);
  main_c(str24, result_str24, ptr_res);
  main_c(str25, result_str25, ptr_res);

  ck_assert_str_eq("3.1", result_str1);
  ck_assert_str_eq("10", result_str2);
  ck_assert_str_eq("401", result_str3);
  ck_assert_str_eq("262144", result_str4);
  ck_assert_str_eq("2", result_str5);
  ck_assert_str_eq("13", result_str6);
  ck_assert_str_eq("101", result_str7);
  ck_assert_str_eq("-8.84146362", result_str8);
  ck_assert_str_eq("-275097.06266651", result_str9);
  ck_assert_str_eq("134217740", result_str10);
  ck_assert_str_eq("-27.84", result_str11);
  ck_assert_str_eq("263", result_str12);
  ck_assert_str_eq("368", result_str13);
  ck_assert_str_eq("315117881633", result_str14);
  ck_assert_str_eq("0", result_str15);
  ck_assert_str_eq("1000.80378196", result_str16);
  ck_assert_str_eq("7.1", result_str17);
  ck_assert_str_eq("3", result_str18);
  ck_assert_str_eq("163", result_str19);
  ck_assert_str_eq("192.21637353", result_str20);
  ck_assert_str_eq("0.14791325", result_str21);
  ck_assert_str_eq("1131", result_str22);
  ck_assert_str_eq("57.57831081", result_str23);
  ck_assert_str_eq("120.29849028", result_str24);
  ck_assert_str_eq("8.61911798", result_str25);
}
END_TEST

// Trigonometric functions tests
START_TEST(funcs_result_tests) {
  char str1[] = "acos(0.9)";
  char str2[] = "-acos(0.9)";
  char str3[] =
      "5+(1+2)*4*cos(2*7.5-2)+sin(cos(2*5))-sqrt(2^5)+asin(0.5)+tan(50)";
  char str4[] =
      "5+(1+2)*4*cos(2*7.5-2)+sin(cos(2*5))-sqrt(2mod5)+asin(0.5)+tan(50)";
  char str5[] = "sqrt(4)+log(10)+ln(10)";
  char str6[] = "sin(60)";
  char str7[] = "asin(1/2)+acos(0)+atan(1)+(2)sin(2)sin(2)";
  char str8[] = "2.123456789+2.123456789*3^2+cos(5)^sin(-1)";
  char str9[] = "1+sin(2)+cos(-3)*(2mod5)/4-5";
  char str10[] = "cos(2)+sin(2)+tan(2)+sin(-5)+ln(5)+log(25)+acos(1)";
  char str11[] = "cos(2)/sin(2)^3";
  char str12[] =
      "cos(1)+(-sin(1))*sqrt(36)/tan(1)*acos(1)+atan(1)/"
      "asin(1)+sqrt(36)*1^2/ln(10)-log(10)+8^3";
  char str13[] =
      "cos(1)+(-sin(1))*sqrt(36)/tan(1)*acos(1)+atan(1)/"
      "asin(1)+sqrt(36)*1^2/ln(10)-log(10)";
  char str14[] = "+(cos(1)+(-sin(1))*sqrt(36)/tan(1)+sqrt(36)*2.5^2)";
  char str15[] = "cos(1)+sin(1)+sqrt(99)+sin(1)+sqrt(36)";
  char str16[] = "1+2*3^(4mod5)+6*7/sin(8)*cos(9)+tan(10)*sqrt(11)";
  char str17[] =
      "((1+0)mod1)+(-(-sin(1))*sqrt(36)/tan(1)*acos(1)+atan(1)/"
      "asin(1)+sqrt(36))*1^2/ln(10)-log(10)+(4mod3)+sin(sin(-cos(2)))";
  char str18[] =
      "((1+0)mod1)+(-sin(1))*sqrt(36)/tan(1)*acos(1)+atan(1)/"
      "asin(1)+sqrt(36)*1^2/ln(10)-log(10)+(4mod3)+sin(sin(-cos(2)))";
  char str19[] =
      "cos(1)+(-sin(1))*sqrt(36)/tan(1)*acos(1)+atan(1)/"
      "asin(1)+sqrt(36)*1^2/ln(10)-log(10)+(4mod3)";
  char str20[] =
      "(1)+log(ln(10))+(log(2))+cos(1)+(-sin(1))*sqrt(36)/"
      "tan(1)*sin(1)+atan(1)/asin(1)+sqrt(36)*1^2/ln(10)-log(10)+4mod3";
  char str21[] =
      "cos(-0.1)+(-(sin(-00.03))*(-(001.45^005.654^(0.05-001."
      "000026765)))/cos(-001.17)*atan(+009.000009))";
  char str22[] = "sin(1)+((-2)mod(3+3))*atan(-1)/2/2^cos(2)";
  char str23[] = "atan(0.8)+asin(0.5)^acos(0.4)";
  char str24[] =
      "-(sin(+2.123+1.189)*tan(3.33+(-1.2))+acos(0.256)+atan(-0543."
      "321))*asin(0.5)";
  char str25[] = "+(-(sin(157)))+(cos(17)+tan(221))";
  char str26[] =
      "-(1mod2+2sin(2)*3cos(3)/"
      "((4acos(0.5))*1atan(1))+3log(55)*3ln(10))+2log(2)^1tan(3)";

  char result_str1[50];
  char result_str2[50];
  char result_str3[50];
  char result_str4[50];
  char result_str5[50];
  char result_str6[50];
  char result_str7[50];
  char result_str8[50];
  char result_str9[50];
  char result_str10[50];
  char result_str11[50];
  char result_str12[50];
  char result_str13[50];
  char result_str14[50];
  char result_str15[50];
  char result_str16[50];
  char result_str17[50];
  char result_str18[50];
  char result_str19[50];
  char result_str20[50];
  char result_str21[50];
  char result_str22[50];
  char result_str23[50];
  char result_str24[50];
  char result_str25[50];
  char result_str26[50];

  int res = 0;
  int *ptr_res = &res;

  main_c(str1, result_str1, ptr_res);
  main_c(str2, result_str2, ptr_res);
  main_c(str3, result_str3, ptr_res);
  main_c(str4, result_str4, ptr_res);
  main_c(str5, result_str5, ptr_res);
  main_c(str6, result_str6, ptr_res);
  main_c(str7, result_str7, ptr_res);
  main_c(str8, result_str8, ptr_res);
  main_c(str9, result_str9, ptr_res);
  main_c(str10, result_str10, ptr_res);
  main_c(str11, result_str11, ptr_res);
  main_c(str12, result_str12, ptr_res);
  main_c(str13, result_str13, ptr_res);
  main_c(str14, result_str14, ptr_res);
  main_c(str15, result_str15, ptr_res);
  main_c(str16, result_str16, ptr_res);
  main_c(str17, result_str17, ptr_res);
  main_c(str18, result_str18, ptr_res);
  main_c(str19, result_str19, ptr_res);
  main_c(str20, result_str20, ptr_res);
  main_c(str21, result_str21, ptr_res);
  main_c(str22, result_str22, ptr_res);
  main_c(str23, result_str23, ptr_res);
  main_c(str24, result_str24, ptr_res);
  main_c(str25, result_str25, ptr_res);
  main_c(str26, result_str26, ptr_res);

  ck_assert_str_eq("0.45102681", result_str1);
  ck_assert_str_eq("-0.45102681", result_str2);
  ck_assert_str_eq("9.74018221", result_str3);
  ck_assert_str_eq("13.98282289", result_str4);
  ck_assert_str_eq("5.30258509", result_str5);
  ck_assert_str_eq("-0.30481062", result_str6);
  ck_assert_str_eq("4.53343688", result_str7);
  ck_assert_str_eq("24.12160061", result_str8);
  ck_assert_str_eq("-3.58569882", result_str9);
  ck_assert_str_eq("2.27441292", result_str10);
  ck_assert_str_eq("-0.55351412", result_str11);
  ck_assert_str_eq("514.64606919", result_str12);
  ck_assert_str_eq("2.64606919", result_str13);
  ck_assert_str_eq("34.79848847", result_str14);
  ck_assert_str_eq("18.17311864", result_str15);
  ck_assert_str_eq("126.47128531", result_str16);
  ck_assert_str_eq("3.21623348", result_str17);
  ck_assert_str_eq("3.49908624", result_str18);
  ck_assert_str_eq("3.64606919", result_str19);
  ck_assert_str_eq("2.5814226", result_str20);
  ck_assert_str_eq("0.87440666", result_str21);
  ck_assert_str_eq("-1.25453518", result_str22);
  ck_assert_str_eq("1.14706587", result_str23);
  ck_assert_str_eq("-0.00729272", result_str24);
  ck_assert_str_eq("1.7145505", result_str25);
  ck_assert_str_eq("-35.51005662", result_str26);
}
END_TEST

// Math operators errors
START_TEST(operator_errors) {
  char str1[] = " ";
  char str2[] = "*1+2";
  char str3[] = "((1+3)";
  char str4[] = "1S/5";
  char str5[] = "sqrt(2+())";
  char str6[] = "(1(+)2)(3*4)";
  char str7[] = "1+2+(sin)";
  char str8[] = "4+(1..23*5)";
  char str9[] = "4+(2+)";
  char str10[] = "1+2*3.(1+3)";
  char str11[] = "1+3+3.4.5+7";
  char str12[] = "-2 3+4";
  char str13[] = "1+77+";
  char str14[] = "1*22323//3*(42344556+5)-(-8000808/2*8)";
  char str15[] = "1*0/1*(2+0)-&(1/2*0)";
  char str16[] = "2*2+(-1.23456)+(";
  char str17[] = "8+1*(.(4-2))";
  char str18[] = "1+2*+3^4mod5";
  char str19[] = "1+2*3(^(4mod5))";
  char str20[] = "1+.3^(4mod5)+6+7*sqrt(11)";
  char str21[] = "sin(-)";
  char str22[] = "1128+((-2)mod(3+5))*10/5/2^.2";
  char str23[] = ")-1)+4^(-2))";
  char str24[] = "-0000543.00321+(2^)";
  char str25[] = "1+3+3)4-(-5";

  char result_str1[50];
  char result_str2[50];
  char result_str3[50];
  char result_str4[50];
  char result_str5[50];
  char result_str6[50];
  char result_str7[50];
  char result_str8[50];
  char result_str9[50];
  char result_str10[50];
  char result_str11[50];
  char result_str12[50];
  char result_str13[50];
  char result_str14[50];
  char result_str15[50];
  char result_str16[50];
  char result_str17[50];
  char result_str18[50];
  char result_str19[50];
  char result_str20[50];
  char result_str21[50];
  char result_str22[50];
  char result_str23[50];
  char result_str24[50];
  char result_str25[50];

  int res = 0;
  int *ptr_res = &res;

  main_c(str1, result_str1, ptr_res);
  main_c(str2, result_str2, ptr_res);
  main_c(str3, result_str3, ptr_res);
  main_c(str4, result_str4, ptr_res);
  main_c(str5, result_str5, ptr_res);
  main_c(str6, result_str6, ptr_res);
  main_c(str7, result_str7, ptr_res);
  main_c(str8, result_str8, ptr_res);
  main_c(str9, result_str9, ptr_res);
  main_c(str10, result_str10, ptr_res);
  main_c(str11, result_str11, ptr_res);
  main_c(str12, result_str12, ptr_res);
  main_c(str13, result_str13, ptr_res);
  main_c(str14, result_str14, ptr_res);
  main_c(str15, result_str15, ptr_res);
  main_c(str16, result_str16, ptr_res);
  main_c(str17, result_str17, ptr_res);
  main_c(str18, result_str18, ptr_res);
  main_c(str19, result_str19, ptr_res);
  main_c(str20, result_str20, ptr_res);
  main_c(str21, result_str21, ptr_res);
  main_c(str22, result_str22, ptr_res);
  main_c(str23, result_str23, ptr_res);
  main_c(str24, result_str24, ptr_res);
  main_c(str25, result_str25, ptr_res);

  ck_assert_str_eq("*error: unknown symbol.", result_str1);
  ck_assert_str_eq("*error: check the first char.", result_str2);
  ck_assert_str_eq("*error: parentheses.", result_str3);
  ck_assert_str_eq("*error: unknown symbol.", result_str4);
  ck_assert_str_eq("*error: --> '()'", result_str5);
  ck_assert_str_eq("*error:  operator)", result_str6);
  ck_assert_str_eq("*error: grammar, type: sin)", result_str7);
  ck_assert_str_eq("*error: two operators/dots, type: *+/.. .", result_str8);
  ck_assert_str_eq("*error:  operator)", result_str9);
  ck_assert_str_eq("*error: (.(", result_str10);
  ck_assert_str_eq("*error: two dots, type: 5.4.3", result_str11);
  ck_assert_str_eq("*error: unknown symbol.", result_str12);
  ck_assert_str_eq("*error: check the last character.", result_str13);
  ck_assert_str_eq("*error: two operators/dots, type: *+/.. .", result_str14);
  ck_assert_str_eq("*error: unknown symbol.", result_str15);
  ck_assert_str_eq("*error: check the last character.", result_str16);
  ck_assert_str_eq("*error: (.(", result_str17);
  ck_assert_str_eq("*error: two operators/dots, type: *+/.. .", result_str18);
  ck_assert_str_eq("*error: (/^*", result_str19);
  ck_assert_str_eq("*error: two operators/dots, type: *+/.. .", result_str20);
  ck_assert_str_eq("*error:  operator)", result_str21);
  ck_assert_str_eq("*error: two operators/dots, type: *+/.. .", result_str22);
  ck_assert_str_eq("*error: check the first char.", result_str23);
  ck_assert_str_eq("*error:  operator)", result_str24);
  ck_assert_str_eq("*error: check operators/funcs.", result_str25);
}
END_TEST

// Grammar errors in functions
START_TEST(grammar_errors) {
  char str1[] = "1+mod3+5";
  char str2[] = "1+2mod+5";
  char str3[] = "4*sn(2*7.5-2)";
  char str4[] = "ccos(2*5)-sqrt(5)";
  char str5[] = "c2*5-sqrt(5)";
  char str6[] = "n(60)";
  char str7[] = "acos(0)+n(1)";
  char str8[] = "aton(2.19)+2.2";
  char str9[] = "r(2)+co(2)*(2mod5)";
  char str10[] = "lg(25)+2";
  char str11[] = "sqr(2)/(2)^3";
  char str12[] = "os(1)+(-sin(1))";
  char str13[] = "cos(1)in(2)";
  char str14[] = "1+d2+3";
  char str15[] = "cos(1)*acis(1)";
  char str16[] = "(4md5)+6*7";
  char str17[] = "log(log)+2";
  char str18[] = "(+atan(atan))";
  char str19[] = "sinsinsin";
  char str20[] = "llln(10)-log(10)+43";
  char str21[] = "(1+log)";
  char str22[] = "tis(1)^cos(2)";
  char str23[] = "1+2+(3+5)mod5ssin(2)";
  char str24[] = "-(nn(+2.123+1.189))";
  char str25[] = "1+(ttt(221))";

  char result_str1[50];
  char result_str2[50];
  char result_str3[50];
  char result_str4[50];
  char result_str5[50];
  char result_str6[50];
  char result_str7[50];
  char result_str8[50];
  char result_str9[50];
  char result_str10[50];
  char result_str11[50];
  char result_str12[50];
  char result_str13[50];
  char result_str14[50];
  char result_str15[50];
  char result_str16[50];
  char result_str17[50];
  char result_str18[50];
  char result_str19[50];
  char result_str20[50];
  char result_str21[50];
  char result_str22[50];
  char result_str23[50];
  char result_str24[50];
  char result_str25[50];

  int res = 0;
  int *ptr_res = &res;

  main_c(str1, result_str1, ptr_res);
  main_c(str2, result_str2, ptr_res);
  main_c(str3, result_str3, ptr_res);
  main_c(str4, result_str4, ptr_res);
  main_c(str5, result_str5, ptr_res);
  main_c(str6, result_str6, ptr_res);
  main_c(str7, result_str7, ptr_res);
  main_c(str8, result_str8, ptr_res);
  main_c(str9, result_str9, ptr_res);
  main_c(str10, result_str10, ptr_res);
  main_c(str11, result_str11, ptr_res);
  main_c(str12, result_str12, ptr_res);
  main_c(str13, result_str13, ptr_res);
  main_c(str14, result_str14, ptr_res);
  main_c(str15, result_str15, ptr_res);
  main_c(str16, result_str16, ptr_res);
  main_c(str17, result_str17, ptr_res);
  main_c(str18, result_str18, ptr_res);
  main_c(str19, result_str19, ptr_res);
  main_c(str20, result_str20, ptr_res);
  main_c(str21, result_str21, ptr_res);
  main_c(str22, result_str22, ptr_res);
  main_c(str23, result_str23, ptr_res);
  main_c(str24, result_str24, ptr_res);
  main_c(str25, result_str25, ptr_res);

  ck_assert_str_eq("*error: expected number before 'mod'", result_str1);
  ck_assert_str_eq("*error: grammar, type: ccossln/no'('.", result_str2);
  ck_assert_str_eq("*error: grammar, type: ccossln/no'('.", result_str3);
  ck_assert_str_eq("*error: grammar, type: ccossln/no'('.", result_str4);
  ck_assert_str_eq("*error: grammar, type: ccossln/no'('.", result_str5);
  ck_assert_str_eq("*error: grammar, type: n(2)", result_str6);
  ck_assert_str_eq("*error: grammar, type: 1n2", result_str7);
  ck_assert_str_eq("*error: grammar, type: 4oi2", result_str8);
  ck_assert_str_eq("*error: grammar, type: n(2)", result_str9);
  ck_assert_str_eq("*error: grammar, type: +g2", result_str10);
  ck_assert_str_eq("*error: grammar, type: 2q2", result_str11);
  ck_assert_str_eq("*error: grammar, type: n(2)", result_str12);
  ck_assert_str_eq("*error: grammar, type: 1i2", result_str13);
  ck_assert_str_eq("*error: grammar, type: *dr2", result_str14);
  ck_assert_str_eq("*error: grammar, type: 1i2", result_str15);
  ck_assert_str_eq("*error: grammar, type: *dr2", result_str16);
  ck_assert_str_eq("*error: grammar, type: sin)", result_str17);
  ck_assert_str_eq("*error: grammar, type: sin)", result_str18);
  ck_assert_str_eq("*error: grammar, type: ccossln/no'('.", result_str19);
  ck_assert_str_eq("*error: grammar, type: ccossln/no'('.", result_str20);
  ck_assert_str_eq("*error: grammar, type: sin)", result_str21);
  ck_assert_str_eq("*error: grammar, type: 1i2", result_str22);
  ck_assert_str_eq("*error: grammar, type: ccossln/no'('.", result_str23);
  ck_assert_str_eq("*error: grammar, type: 1n2", result_str24);
  ck_assert_str_eq("*error: grammar, type: ccossln/no'('.", result_str25);
}
END_TEST

// Additional tests for "gcov_report".
START_TEST(additional_tests) {
  char str1[] = "1.055+2.045";
  char str2[] = "1+2*(3+4/2-(1+2))*2+1";
  char str3[] = "-3+4*2+(11(1+2))(3*4)";
  char str4[] = "4^3^2";
  char str5[] = "sqrt(sqrt(16))";
  char str6[] = "5+(-1+3)*4";
  char str7[] = "+1+(-2)+(+3)-4+(+5)+(-2+(+100)*(-6+7))";
  char str8[] =
      "0.2-00.03*(001.45^005.654^(0.16-001.000026765))^(-001.17+7.0*"
      "0.7)-009.000009";
  char str9[] =
      "(+0.721)+0*((-01.22)+256)+(-(0.25-00003.04433))+((+5.656)-(6."
      "21/7*2+8))-(0.3^(-5.5)+3.3^3.5)+2.21^2.8/4*(-119112)";
  char str10[] = "1+6+2*3-4-6/2+2^2+2^3^3+2^2/2*1^2";
  char str11[] =
      "1+(-2)+2*(-(3+10/"
      "5-(6+7)))+2(8+2*((+2)+3^1-3^2*(3-1)))+(-5+6+(-8+2.5^(-2)))";
  char str12[] =
      "-1*(+77)*((-3)+((-15)/1)-(-(6+7)))+((+8)+((-2)*(2+3^2^2-3^2*(3-1))))";
  char str13[] = "1+77*(3+(15/1)-(6+7))+(8+(2*(2+3^1-3^2*(3-1))))";
  char str14[] = "1*22323/3*(42344556+5)-(-8000808/2*8)";
  char str15[] = "1*0/1*(2+0)-(1/2*0)";
  char str16[] =
      "sqrt(0.2)-sqrt(00.03)*(0.45^1.654^(0.6-001.000026765))^(-001."
      "17+7.0*0.7)-sqrt(009.000009)+(-111.1234567+110.765432*((-1)+"
      "4/2*(-2)*(-(2*2+(-1.23456)))))";
  char str17[] = "0.5mod0.2+2*3mod8+1";
  char str18[] = "1+2*3^4mod5";
  char str19[] = "1+2*3^(4mod5)";
  char str20[] = "1+2*3^(4mod5)+6+7*sqrt(11)";
  char str21[] =
      "-0.1-(-00.03)*(-(001.45^005.654^(0.05-001.000026765)))/"
      "(-001.17)*(+009.000009)";
  char str22[] = "sin(1)+((4mod5))*atan(-1)/2/2^cos(2)";
  char str23[] = "atan(0.8)+asin(0.5)^acos(0.4)";
  char str24[] =
      "-(sin(+2.123+1.189)*tan(3.33+(-1.2))+acos(0.256)+atan(-0543."
      "321))*asin(0.5)";
  char str25[] = "+(-(sin(157)))+(cos(17)+tan(221))";
  char str26[] =
      "-(1mod2+2sin(2)*3cos(3)/"
      "((4acos(0.5))*1atan(1))+3log(55)*3ln(10))+2log(2)^1tan(3)";
  char str27[] = "25/0";
  char str28[] = "1      2       +";
  char str29[] = "1      2       +";
  char str30[] =
      "1.12345678901234567890123456890*1.12345678901234567890123456890+1."
      "12345678901234567890123456890-1.12345678901234567890123456890*(1."
      "12345678901234567890123456890+1.12345678901234567890123456890)";

  char result_str1[50];
  char result_str2[50];
  char result_str3[50];
  char result_str4[50];
  char result_str5[50];
  char result_str6[50];
  char result_str7[50];
  char result_str8[50];
  char result_str9[50];
  char result_str10[50];
  char result_str11[50];
  char result_str12[50];
  char result_str13[50];
  char result_str14[50];
  char result_str15[50];
  char result_str16[50];
  char result_str17[50];
  char result_str18[50];
  char result_str19[50];
  char result_str20[50];
  char result_str21[50];
  char result_str22[50];
  char result_str23[50];
  char result_str24[50];
  char result_str25[50];
  char result_str26[50];
  char result_str27[50];
  char result_str30[50];
  double num_1 = 0.0;
  double num_2 = 0.0;
  int res_1 = 0;
  int res_2 = 0;
  int res_3 = 0;
  int res_4 = 0;
  int res_5 = 0;
  int res_6 = 0;

  int res = 0;
  int *ptr_res = &res;

  graph_main_c(str1, result_str1, ptr_res);
  graph_main_c(str2, result_str2, ptr_res);
  graph_main_c(str3, result_str3, ptr_res);
  graph_main_c(str4, result_str4, ptr_res);
  graph_main_c(str5, result_str5, ptr_res);
  graph_main_c(str6, result_str6, ptr_res);
  graph_main_c(str7, result_str7, ptr_res);
  graph_main_c(str8, result_str8, ptr_res);
  graph_main_c(str9, result_str9, ptr_res);
  graph_main_c(str10, result_str10, ptr_res);
  graph_main_c(str11, result_str11, ptr_res);
  graph_main_c(str12, result_str12, ptr_res);
  graph_main_c(str13, result_str13, ptr_res);
  graph_main_c(str14, result_str14, ptr_res);
  graph_main_c(str15, result_str15, ptr_res);
  graph_main_c(str16, result_str16, ptr_res);
  graph_main_c(str17, result_str17, ptr_res);
  graph_main_c(str18, result_str18, ptr_res);
  graph_main_c(str19, result_str19, ptr_res);
  graph_main_c(str20, result_str20, ptr_res);
  graph_main_c(str21, result_str21, ptr_res);
  graph_main_c(str22, result_str22, ptr_res);
  graph_main_c(str23, result_str23, ptr_res);
  graph_main_c(str24, result_str24, ptr_res);
  graph_main_c(str25, result_str25, ptr_res);
  graph_main_c(str26, result_str26, ptr_res);
  main_c(str27, result_str27, ptr_res);
  num_1 = calculator(str28, ptr_res);
  num_2 = graph_calculator(str29, ptr_res);
  res_1 = check_x("-123.12345678");
  res_2 = check_x("12.123");
  res_3 = check_x("QWE-123.12345678");
  res_4 = check_x("-123.123456789012345689012345678901234567890");
  res_5 = check_x("");
  res_6 = funcserrors("cs(2)+2");
  graph_main_c(str30, result_str30, ptr_res);

  ck_assert_str_eq("3.1", result_str1);
  ck_assert_str_eq("10", result_str2);
  ck_assert_str_eq("401", result_str3);
  ck_assert_str_eq("262144", result_str4);
  ck_assert_str_eq("2", result_str5);
  ck_assert_str_eq("13", result_str6);
  ck_assert_str_eq("101", result_str7);
  ck_assert_str_eq("-8.84146362", result_str8);
  ck_assert_str_eq("-275097.06266651", result_str9);
  ck_assert_str_eq("134217740", result_str10);
  ck_assert_str_eq("-27.84", result_str11);
  ck_assert_str_eq("263", result_str12);
  ck_assert_str_eq("368", result_str13);
  ck_assert_str_eq("315117881633", result_str14);
  ck_assert_str_eq("0", result_str15);
  ck_assert_str_eq("1000.80378196", result_str16);
  ck_assert_str_eq("7.1", result_str17);
  ck_assert_str_eq("3", result_str18);
  ck_assert_str_eq("163", result_str19);
  ck_assert_str_eq("192.21637353", result_str20);
  ck_assert_str_eq("0.14791325", result_str21);
  ck_assert_str_eq("-1.25453518", result_str22);
  ck_assert_str_eq("1.14706587", result_str23);
  ck_assert_str_eq("-0.00729272", result_str24);
  ck_assert_str_eq("1.7145505", result_str25);
  ck_assert_str_eq("-35.51005662", result_str26);
  ck_assert_str_eq("*error: divison/mod by zero.", result_str27);
  ck_assert_double_eq(num_1, 3.0);
  ck_assert_double_eq(num_2, 3.0);
  ck_assert_int_eq(res_1, 0);
  ck_assert_int_eq(res_2, 0);
  ck_assert_int_eq(res_3, -1);
  ck_assert_int_eq(res_4, 2);
  ck_assert_int_eq(res_5, 2);
  ck_assert_int_eq(res_6, -1);
  ck_assert_str_eq("-0.13869836", result_str30);
}
END_TEST

Suite *smartcalc_suite() {
  Suite *s;
  TCase *tc_core;

  s = suite_create(
      "calculator test.\n*135 math-expressions in 5 test blocks.*");

  /* Core test case */
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, math_result_test);
  tcase_add_test(tc_core, funcs_result_tests);
  tcase_add_test(tc_core, operator_errors);
  tcase_add_test(tc_core, grammar_errors);
  tcase_add_test(tc_core, additional_tests);

  suite_add_tcase(s, tc_core);

  return s;
}

int main() {
  int number_failed;
  Suite *s;
  SRunner *sr;

  s = smartcalc_suite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
