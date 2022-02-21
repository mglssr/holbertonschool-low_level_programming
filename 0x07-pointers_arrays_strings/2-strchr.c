#include "main.h"

/**
* _strchr - function that locates a char in a string
* @s: string s
* @c: char a buscar
* Return: s
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);
}
	
