#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/**
* struct pr - con esta struct creo un array que contiene mi type a matchear y su funcion correspondiente
* @ty: type que busco matchear
* @f: puntero a va ir a una de las funciones que voy a usar para printear
*/
typedef struct pr
{
  char ty;
  void (*f)(va_list);
} p_rry;

#endif
