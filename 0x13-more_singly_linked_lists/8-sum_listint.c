#include "lists.h"

/**
* sum_listint - function that returns the sum of all the (n) of a list
* @head: puntero uwu
* Return: algo jiji
*
*/

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		sum = sum + (*ptr).n;
		ptr = (*ptr).next;
	}
return (sum);
}
