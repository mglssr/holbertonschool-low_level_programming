#include "lists.h"

/**
* add_nodeint_end - function that add a new node at the end of a list
* @head: puntero a puntero
* @n: entero n
* Return: adress of element or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		aux = *head;

		while ((*aux).next)
		{
			aux = (*aux).next;
		}
		(*aux).next = new;
	}
return (new);
}
