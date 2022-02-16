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
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && (src[j] != '\0'))
	{
		dest[j] = src[j];
		j++;
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}

