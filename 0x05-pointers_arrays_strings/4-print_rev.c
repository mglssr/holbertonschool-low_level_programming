#include "main.h"
#include <string.h>

/**
* print_rev - print una string en reversa}
* @s: ias
*
*/
void print_rev(char *s)
{
		int i;

	while (s[i] <= '\0')
	{
		_putchar(s[i]);
		i--;
	}
		_putchar('\n');
}
