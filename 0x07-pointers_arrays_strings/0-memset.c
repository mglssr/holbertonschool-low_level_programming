#include "main.h"

/**
*_memset - function that fills memory with a constant byte.
*@s: area pointed
*@n: the first bytes of the memory
*@b: constant byte
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
