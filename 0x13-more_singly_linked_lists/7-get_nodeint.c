#include "lists.h"

/**
* get_nodeint_at_index - functiop that return the nth node of a list
* @head: puntero uwu
* @index: index of the node
* Return: the nth node of a list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;

	if (current == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;

		current = (*current).next;
	}
	return (current);
}
