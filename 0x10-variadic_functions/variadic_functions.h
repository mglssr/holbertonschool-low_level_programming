#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct pr - Struct pr
* @ty: el type
* @f: la func
*/

typedef struct pr
{
  char ty;
  void (*f)(va_list ty);
} p_rry;

void 
#endif
