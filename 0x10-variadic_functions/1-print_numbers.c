#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - funcion que printea numeros
* @separator: string to be printed between numbers
* @n: numero de ints que se le pasan a la funcion
* Return: algo idk
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ln;

	va_start(ln, n);
	
	for (i = 0; i < n;)
	{
		printf("%d", va_arg(ln, int));
		i++;
		if (separator != NULL && i < n)
		{
			printf("%s",separator);
		}
	}
	printf("\n");
}


