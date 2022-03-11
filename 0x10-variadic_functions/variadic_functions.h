#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list ty);
void print_int(va_list ty);
void print_float(va_list ty);
void print_string(va_list ty);

/**
* struct pr  Struct que voy a usar pa printear idk
* @ty: el type
* @f: la function uwu
*/
typedef struct pr
{
  char ty;
  void (*f)(va_list ty);
} p_rry;

#endif
