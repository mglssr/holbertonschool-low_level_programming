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
	for (int x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
		return (0);
}
