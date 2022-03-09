#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - executes a function given as a parameter on each elementofa
* @array: array xs
* @size: tamaño del array
* @action: aaaaaaa
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
