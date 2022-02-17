#include "main.h"
/**
* leet - encodes a string into 1337
* @p: la string idk
* Return: p encoded
*/
char *leet(char *p)
{
	int x, y;
	char i[12] = "aAeEoOtTlL";
	char j[12] = "4433007711";

	for (x = 0; p[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (p[x] == i[y])
				p[x] = j[y];
		}
	}
	return (p);
}
	
