#include "main.h"
/**
* reverse_array - funcion que revierte el array
* @a: array
* @n: numero de elementos del array
*/
void reverse_array(int *a, int n)
{
	int j = 0;
	int i;
	int x;

	i = n - 1;

	for (j = 0; j <= i; j++, i--)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
	}
}
