#include "lists.h"

/**
* pop_listint - function thet delets the head node of a list and ret node´s dat
* @head: puntero de puntero
* Return: data del nodo
*/

int pop_listint(listint_t **head)
{
	listint_t *dn;
	int data;

	if (*head ==  NULL)
		return (0);
	
	dn = *head;
	data = (*dn).n;
	*head = (*dn).next;
	free(dn);

return (data);
}
