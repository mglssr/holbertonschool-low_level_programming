#include "main.h"
/**
*
*
*
*/
void times_table(void)
{
	int A, B, res = 0;
	for (A = 0; A < 10; A++)
	{
		res = B * A;
		for (B = 0; B < 10; B++)
		{
			if (B != 0)
			{
				_putchar(' ');

				if (res < 10)
					_putchar(' ');
			}

			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(res + '0');
			}
			if (B == 9)
			{
				_putchar('\n');
			}
			else
				_putchar(',');
		}
	}
}

