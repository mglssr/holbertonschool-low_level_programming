#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node at the end of a dlist
* @head: head of the dlist
* @n: const int n
* Return: address of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	(*new).n = n;

	(*new).next = NULL;

	if (*head == NULL)
	{
		(*new).prev = NULL;
		*head = new;
	}
	else
	{
		aux = *head;

		while ((*aux).next)
		{
			aux = (*aux).next;
		}
		(*aux).next = new;
		(*new).prev = aux;
	}
	return (new);
}
