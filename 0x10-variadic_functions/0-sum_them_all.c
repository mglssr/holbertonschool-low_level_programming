#include "variadic_functions.h"

/**
* int sum_them_all - funcion que retorna la suma todos los parámetros
* @n: cantidad de parametros
* Return: algo xd
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ln;
	unsigned int i;
	int sum = 0;

	va_start(ln, n);
	
		if (n == 0)
			return (0);
		for (i = 0; i < n; i++)
			sum += va_arg(ln, int);
	va_end(ln);

	return (sum);
}
