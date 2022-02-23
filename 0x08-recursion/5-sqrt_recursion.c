#include "main.h"
/**
* aux_func - funcion auxiliar
* @n: adiajds
* @x: qsq
* Return: algo idk
*/
int aux_func(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (aux_func(n, x + 1));
}

/**
* _sqrt_recursion - funcion que retorna la raiz cuadrada de un num n
* @n: asada
* Return: algo idk
*/
int _sqrt_recursion(int n)
{
	return (aux_func(n, 0));
}

