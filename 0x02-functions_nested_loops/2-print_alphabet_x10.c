#include <stdio.h>
#include <math.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)

{
	char ch;
ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
}
int main(void)
{
	print_alphabet_x10();
	putchar('\n');
	return (0);
}
