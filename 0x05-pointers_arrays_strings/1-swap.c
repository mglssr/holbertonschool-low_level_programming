#include "main.h"
/**
* swap_int - saji
* @a: puntero
* @b: puntero
* @c: una variable que guarda el valor de un puntero
*
*/
void swap_int(int *a, int *b, int c)
{
	c = *a;
	*a = *b;
	*b = c;
}
