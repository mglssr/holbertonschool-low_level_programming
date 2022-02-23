#include "main.h"
/**
* _puts_recursion - funcion que imprime una string seguida de una nueva linea
* @s: string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
