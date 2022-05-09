#include "main.h"
#include <stdio.h>

/**
* _memcpy - funcion que copia una string
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

/**
* _strspn - a function that gets the length of a prefix substring
* @s: first pointer
* @accept: second pointer
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; s[a] != ' '; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
	}
return (c);
}

/**
 *_strpbrk - main
 *@s: string to be scanned
 *@accept: string cointaing the characters to match
 *Return: null if not match, a pointer to first occurence if match
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
				return ('\0');
}

/**
 *_strstr - a function that locates a substring
 *@haystack: string 1
 *@needle: string 2
 *Return: leme see
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	int len = 0;

	while (needle[len] != '\0')
		len++;

	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (haystack[index] != needle[index])
				break;
		}
		if (index != len)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
