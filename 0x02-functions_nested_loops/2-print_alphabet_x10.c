#include "main.h"
/**
* print_alphabet_x10 - holi
 */
void print_alphabet_x10(void)

{
	int c, count;
count = 0;
	while (count < 10)
{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	count++;
	_putchar('\n');
}
}
