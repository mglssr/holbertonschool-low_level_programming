#include "main.h"
/**
* _strchr - function that locates a char in a string
* @s: string s
* @c: char a buscar
* Return: s
*/
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	for (i = 0; s[i] < c; i++)

		if (s[i] != c)
			{
			break;
			return (0);
			}
	
	for (j = c; s[j] != '\0'; j++)
	return (s);
}
