#include <stdio.h>
#include "main.h"
/**
* _puts - funcion que imprime una string y hace un salto de linea
* @str: puntero
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
