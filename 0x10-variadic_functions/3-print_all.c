#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_all - function that prints anything
* @format: o.o
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int x, y;
	char *separator = "";

	p_rry type[] = {
			{'c', print_char},
			{'i', print_int},
			{'f', print_float},
			{'s', print_string},
			{'\0', NULL}
	};

	va_start(args, format);

	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		y = 0;
		while (type[y].ty != '\0')
		{
			if (type[y].ty == format[x])
			{
				printf("%s", separator);
				type[y].f(args);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	va_end(args);

	printf("\n");
}

/**
* print_char - printea una variable tipo char
* @c: elemento de la va_list
*/

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
* print_int - aaaaaaaaaaaaaaa
* @i: uwu
*/
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
* print_float - o.o
* @f: pepepepepe
*/
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
* print_string - aiudaaa
* @s: uwu
*/
void print_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	else
		printf("%s", string);
}
