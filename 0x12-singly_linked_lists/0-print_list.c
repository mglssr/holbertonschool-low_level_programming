#include "lists.h"
#include <stdio.h>

/**
* print_list - function that prints all elements of a list_t list
* @h: pointer uwu
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
			count++;
	}
	return (count);
}
