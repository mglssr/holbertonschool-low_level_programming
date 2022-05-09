#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *_isdigit - asas
 *@c: asd
 *
 * Return:asd
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}

/**
* _strlen - soqksoqk
* @str: string
* Return: algo idk
*/

int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

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

/**
 *_strcpy - asd
 *@dest: asd
 *@src: asd
 *Return: asd
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);

}

int _atoi(char *s)
{
}
