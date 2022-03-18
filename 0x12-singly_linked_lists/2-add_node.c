#include "lists.h"
#include <string.h>
#include <stdlib.h>  
/**
* add_node - function that adds a new node at the beginning of a list
* @head: pointer to a pointer
* @str: string xd
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new; 
	
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	
	(*new).str = strdup(str);
	(*new).len = strlen(str);

	*head = new->next;

return (new);
}
