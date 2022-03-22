#include "lists.h"

/**
* print_listint - function that prints all the element of a list
* @h: puntero
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%u\n", (*h).n);

		h = (*h).next;
			count++;
	}
	return (count);
}
