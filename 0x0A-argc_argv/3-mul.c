#include <stdio.h>
#include <stdlib.h>
/**
*main - ew
*@argc: conteo de argumentos
*@argv: wjq
*Return: ksqj
*/
int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			j = j * atoi(argv[i]);
		}
		printf("%d\n", j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
