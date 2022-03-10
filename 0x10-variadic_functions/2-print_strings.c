#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - funcion que printea una string
* @separator: sjid
* @n: aaaaaaa
* Return: algo idk
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ln;
	char *string;

	va_start(ln, n);

	for (i = 0; i < n;)
	{
		string = va_arg(ln, char *);
		if (!string)
		printf("nil");
		else
	{
		printf("%s", string);
		i++;
	}
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ln);
}
