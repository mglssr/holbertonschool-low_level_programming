#include "lists.h"

/**
* delete_dnodeint_at_index - func that deletes the node at index index of a dli
* @head: head of a dlist
* @index: index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *actual, *next, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	actual = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
				*head = NULL;
		free(actual);
		return (1);
	}
	while (i < index)
	{
		actual = (*actual).next;
		if (actual == NULL)
			return (-1);
		i++;
	}
	if ((*actual).next == NULL)
	{
		actual->prev->next = NULL;
		free(actual);
		return (1);
	}
	next = (*actual).next;
	prev = (*actual).prev;
	(*prev).next = next;
	(*next).prev = prev;
	
	free(next);
	return (1);
}
