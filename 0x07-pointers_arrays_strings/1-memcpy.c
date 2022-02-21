#include "main.h"
/**
* _strncpy - funcion que copia una string
* @dest: string destino
* @src: string idk
* @n: bytes de src
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, j = 0;

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

