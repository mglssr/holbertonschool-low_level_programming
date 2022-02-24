#include "main.h"

/**
* aux_primo - funcion auxiliar
* @n: n a evaluar si es primo
* @x: asfdg
* Return: ahre
*/
int aux_primo(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		{
		if (n % x == 0 && x != 1 && x != n)
			return (0);

		else if (x == n)
			return (1);

		}
		return (aux_primo(n, x + 1));
	return (0);
}

/**
* is_prime_number - funcion
* @n: puta
* Return: djsioc
*/
int is_prime_number(int n)
{
		return (aux_primo(n, 1));
}
