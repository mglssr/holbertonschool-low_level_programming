#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - aiijw
* @b: aaaa
* Return: sdad
*/

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b * sizeof(*p));

	if (!p)
		exit(98);
	else
		return (p);
}
