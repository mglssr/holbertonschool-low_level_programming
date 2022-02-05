#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int ch;
		int a = 9;
		int ac;

		for (ch = 0; ch <= a; ch++)
		{
				ac = ch + 48;
		putchar(ac);
		if (ch < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
putchar('\n');
return (0);
}
