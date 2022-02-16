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
	for (i; i < n && src[i] != '\0'; i++, j++)
	{
	dest[j] = src[i];
	}
	return (dest);
/**
* mientras i vaya recorriendo el array dest se
* le suma 1 de forma simultanea a j,
* para el i que recorre el array, mientras este
* no sea mayor o igual al numero de bytes que tiene
* src y el recorrido de i por el array src sea distinto
* del NULL, sumale tanto a i como a j 1:
* por ultimo asignamos el array dest que recorre j al array
* src que es recorrido por i y devolvemos el DESTino
*/
