#include "main.h"

/**
* _memset - function that fills memory with a constant byte
* @s: area memoria
* @b: a constant byte
* @n: first n bytes of the memory area
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
