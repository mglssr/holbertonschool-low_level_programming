#include "lists.h"

/**
* insert_nodeint_at_index - function that insterts a new node at the given pos
* @head: puntero a puntero uwu
* @idx: is the index of the list where the new node should be added
* @n: un entero uwu.
* Return: next2
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *actual, *next;

	actual = *head;

	next = malloc(sizeof(listint_t));

	if (next == NULL)
		return (NULL);

	next->n = n;

	if (idx == 0)
	{
		next->next = actual;
		*head = next;
		return (*head);
	}

	while (idx > 1)
	{
		actual = actual->next;
		idx--;

		if (actual == NULL)
		{
			free(next);
			return (NULL);
		}

	}

	next->next = actual->next;
	actual->next = next;

	return (next);
}
