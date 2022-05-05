#include "lists.h"

/**
* insert_dnodeint_at_index - func that inserts a new node at a given position
* @h: head of the list
* @idx: index of the list where the new node should be added
* @n: data idk
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *actual, *new;
	
	actual = *h;
	
	new = malloc(sizeof(dlistint_t));
	
	if (!h || !new)
		return (NULL);
	
	(*new).n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));
	
	while (idx > 0)
	{
		actual = (*actual).next;
		idx--;
		if(actual == NULL)
		{
			free(new);
			return (NULL);
		}
		if((*actual).next == NULL)
		{
			free(new);
			return(add_dnodeint_end(h, n));
		}
	}
	(*new).next = (*actual).next;
	(*new).prev = actual;
	actual->next->prev = new;
	(*actual).next = new;
	return (new);
}
