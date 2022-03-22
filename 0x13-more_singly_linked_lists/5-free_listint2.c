#include "lists.h"

/**
* free_listint2 - function that frees a list and sets the head to NULL
* @head: pointer to pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *aux;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL && head != NULL)
	{
		aux = current;
		current = (*current).next;
		free(aux);
	}
	*head = NULL;
}
