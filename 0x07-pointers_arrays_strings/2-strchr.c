#include "main.h"
/**
* _strchr - function that locates a char in a string
* @s: string s
* @c: char a buscar
* Return: s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s++;
		if (s[i] == c)
			return (s);
	}
	if (c == '\0')
		return (0);

	return ('\0');
}
