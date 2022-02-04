#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
* main- Return Point
*
*Return: Always 0 (Success)
*
*/
int main(void)
{
		int ch = 97;

			for (; ch <= 122; ch++)
			{
				putchar(ch);
			if (ch != 101 && ch != 113)
				putchar(ch);
				}
			putchar('\n');
			return (0);
}
