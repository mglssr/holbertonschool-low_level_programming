#include "lists.h"

/**
* free_listint - function that frees a list
* @head: puntero uwu
*/

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *aux;

	current = head;

	while (current != NULL)
	{
		aux = (*current).next;
		free(current);
		current = aux;
	}
}
