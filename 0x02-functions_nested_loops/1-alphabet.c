#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)

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
	print_alphabet();
	putchar('\n');
	return (0);
}
