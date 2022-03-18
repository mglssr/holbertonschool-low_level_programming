#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - function that adds a new node at the end of a list
* @head: pointer to a pointer
* @str: string uwu
* Return: the address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *aux;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = NULL;

	if (*head == NULL)

		*head = new;
	else
	{
		aux = *head;

		while ((*aux).next)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
return (new);
}
