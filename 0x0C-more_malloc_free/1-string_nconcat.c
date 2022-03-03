#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
*_strlen - returns lenght
* @str: pointer
* Return: i
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/**
*string_nconcat - ida
* @s1: unu
* @s2: lloro
* @n: ahre
* Return: ahre
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int id1, id2;

	result = malloc(strlen(s1) + n * sizeof(*result));

	for (id1 = 0; s1[id1]; id1++)
		result[id1] = s1[id1];

	for (id2 = 0; id2 < n && s2[id2]; id2++)
		result[id1 + id2] = s2[id2];

	result[id1 + id2] = '\0';
	return (result);
}
