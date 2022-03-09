#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - funcion que printea un nombre
* @name: nombre a printear
* @f:qqq
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
