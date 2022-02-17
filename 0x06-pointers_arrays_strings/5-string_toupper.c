#include "main.h"
/**
* string_toupper - cambia all lowercase to uppercase
* @s: string
* Return: el string con las uppercase
*/
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)

		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}

return (s);
}
