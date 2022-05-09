#include "main.h"

/**
*_strcat - function that concatenates two strings.
*@src: tyui
*@dest: tyuip
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; src[y] != '\0'; y++, x++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';

	return (dest);

}

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

/**
*_memset - function that fills memory with a constant byte.
*@s: area pointed
*@n: the first bytes of the memory
*@b: constant byte
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
