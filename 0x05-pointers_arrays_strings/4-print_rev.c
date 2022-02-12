#include "main.h"
#include <string.h>

/**
* print_rev - print una string en reversa}
* @s: ias
*
*/
void print_rev(char *s)
{
		int i = 0;
		int a = 0;

		while (s[a] != '\0')
			a++;

		for (i = a - 1; i >= 0; i--)
		_putchar(s[i]);

		_putchar('\n');
}
