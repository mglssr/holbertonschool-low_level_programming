#include <stdlib.h>
#include "main.h"

/**
* create_array - crea un array de chars
* @size: tamaño del array
* @c: sxcAXi
* Return: puntero al array
*/

char *create_array(unsigned int size, char c __attribute__((unused)))
{
		char *ar;
		unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(*ar));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
