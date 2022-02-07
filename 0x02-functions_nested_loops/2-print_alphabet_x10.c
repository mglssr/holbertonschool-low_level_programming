#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
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
