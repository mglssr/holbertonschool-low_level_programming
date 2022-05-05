#include "lists.h"

/**
* add_dnodeint - function that adds a new node at the beginning of a dlist
* @head: head of the dlist
* @n: constant int n
* Return: the address of the new element or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if(!new)
		return(NULL);
	
	(*new).n = n;

	(*new).next = *head;

	(*new).prev = NULL;

	*head = new;

	return (new);
}
