#include <stdlib.h>
#include "main.h"

/**
* _strlen - soqksoqk
* @str: string
* Return: algo idk
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
* _strdup - dwis
* @str: iajia
* Return: jsd
*/

char *_strdup(char *str)
{
	char *str2;
	int i;

	if (!str)
	{
		return (NULL);
	}

	str2 = malloc(_strlen(str) + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			str2[i] = str[i];
		}
		str2[i] = '\0';
	}
	return (str2);
}
