#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - function that prints anything
* @format: o.o
*/

void print_all(const char * const format, ...)
{
		va_list ep;
		int i;
		char c, *s;
		float f;

		va_start(ep, format);
		
