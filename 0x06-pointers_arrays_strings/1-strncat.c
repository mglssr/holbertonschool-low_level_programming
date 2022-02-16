#include "main.h"
/**
* _strncat - concatena dos strings segun un n
* @dest: variable destino
* @src: variable que se concatena con dest
* @n: bytes de src
* Return: el string dest concatenado a
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, j++)
	{
	dest[j] = src[i];
	}
	return (dest);
}
