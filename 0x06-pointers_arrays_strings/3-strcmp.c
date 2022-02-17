#include "main.h"
/**
* _strcmp - funcion que compara dos strings
* @s1: string 1
* @s2: string 2
* Return: saaa
*/
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		return (s1[x] - s2[x]);
	}

	if (s2[x] != '\0')
	{
		return (s1[x] - s2[x]);
	}
	return (0);
}
