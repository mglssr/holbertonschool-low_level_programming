#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data (n) of a dlist
* @head: head of a list
* Return: sum of all data
*/

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	dlistint_t *p;

	p = head;

	while (p != NULL)
	{
		sum += (*p).n;
		p = (*p).next;
	}
	return (sum);
}
