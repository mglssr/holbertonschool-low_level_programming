#include "lists.h"

/**
* insert_nodeint_at_index - function that insterts a new node at the given pos
* @head: puntero a puntero uwu
* @idx: is the index of the list where the new node should be added
* @n: data(?
* Return: algo uwu
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *next2;

	current = *head;
	next2 = malloc(sizeof(listint_t));

	if (next2 == NULL)
		return (NULL);

	(*next2).n = n;

	if (idx == 0)
	{
		(*next2).next = current;
		*head = next2;
		return (*head);
	}

	while (idx > 1)
	{
		current = (*current).next;
		idx--;
		if (current == NULL)
		{
			free(next2);
			return (NULL);
		}
	}

	(*next2).next = (*current).next;
	(*current).next = next2;

	return (next2);
}
