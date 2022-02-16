#include "main.h"
/**
* _strncpy - funcion que copia una string
* @dest: string destino
* @src: string idk
* @n: bytes de src
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}


