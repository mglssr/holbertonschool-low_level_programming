#include "main.h"

/**
 *print_diagonal - asas
 *@n: asd
 *
 * Return:asd
*/
void print_diagonal(int n)
{

int lenght, blank;
	if (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
		{
			for (blank = 0; blank < lenght; blank++)
				_putchar(' ');
			_putchar('\\');

			if (lenght == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
