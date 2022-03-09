#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: array uwu
* @size: tamaño del array
* @cmp: puntero xd
* Return: algo idk
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != '\0')
			return (i);
	}
	return (-1);
}
