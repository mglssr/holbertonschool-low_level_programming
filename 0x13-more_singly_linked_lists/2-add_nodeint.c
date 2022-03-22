#include "lists.h"

/**
* add_nodeint - function that adds a new node at the beginning of a list
* @head: puntero a puntero xd
* @n: entero
* Return: addres of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	
	if (!new)
		return (NULL);
	
	new->n = n;
	
	new->next = *head;
	
	*head = new;

	return (new);
}
