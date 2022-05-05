#include "lists.h"

/**
* free_dlistint - fuction that frees a dlist
* @head: head of the list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *aux;

	current = head;

	while (current != NULL)
	{
		aux = (*current).next;
		free(current);
		current = aux;
	}
}
