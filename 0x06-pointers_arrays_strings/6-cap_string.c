#include "main.h"
/**
* cap_string - Capitalizes all words of a string
* @t: string
* Return: string con los cambios
*/
char *cap_string(char *t)
{
	int i = 0;

	if (t[0] >= 97 && t[0] <= 122)
	{
		t[0] = t[0] - 32;
	}

	for (i = 0; t[i] != '\0'; i++)
	{
		if ((t[i] == 32) || (t[i] == 9) || (t[i] == 10) || (t[i] == 44) ||
			(t[i] == 59) || (t[i] == 46) || (t[i] == 33) || (t[i] == 63)
			|| (t[i] == 34) || (t[i] == 40) || (t[i] == 41) || (t[i] == 123)
			|| (t[i] == 125))
		{
		if (t[i + 1] >= 97 && t[i + 1] <= 122)
		{
		t[i + 1] = t[i + 1] - 32;
		}
		}
	}
return (t);
}
