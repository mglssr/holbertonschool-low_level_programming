#include "main.h"
#include <stdlib.h>

/**
*  array_range - function that creates an arraysof integers
* @min: valor minimo de donde aranca mi array
* @max: valor maximo a donde llega mi array
* Return: algoasjaksja
*/
int *array_range(int min, int max)
{
	int *p;
	int i = 0, a;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (!p)
		return (NULL);
	for (a = min; a <= max; a++)
	{
		p[i++] = a;
	}
	return (p);
}
