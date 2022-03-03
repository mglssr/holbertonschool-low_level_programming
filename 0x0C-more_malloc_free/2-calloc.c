#include "main.h"
#include <stdlib.h>

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
/**
* _calloc - funtiion that allocates memory for an array
* @nmemb: elements of an array
* @size: slaks
* Return: oiwojx
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pun;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pun = malloc(nmemb * size);

	if (pun)
	{
		_memset(pun, 0, nmemb * size);
		return (pun);
	}
	else
		return (NULL);
}
