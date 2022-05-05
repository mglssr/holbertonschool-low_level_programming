#include "lists.h"

/**
* dlistint_len - function that return the number of elements of a dlist
* @h: head of a dlist
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}
