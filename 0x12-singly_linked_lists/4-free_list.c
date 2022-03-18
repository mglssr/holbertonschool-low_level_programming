#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_list - function that frees a list_t list
* @head: pointer
*/

void free_list(list_t *head)
{
	list_t *aux;
	list_t *current;

	current = head;

	while (current != NULL)
	{
		aux = current->next;
		free(current->str);
		free(current);
		current = aux;
	}
}
