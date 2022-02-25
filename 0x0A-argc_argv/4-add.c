#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - ew
*@argc: conteo de argumentos
*@argv: wjq
*Return: ksqj
*/
int main(int argc, char *argv[])
{
	int i = 1; 
	int j = 0;
	int sum;

	for(i = 1; i < argc; i++)
	{
		for(j = 0; j < (int)strlen(argv[i]); j++)
		{
			if(argv[i][j] >= 48 && argv[i][j] <= 57)
			{
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
printf("%d\n",sum);
return (0);
}
