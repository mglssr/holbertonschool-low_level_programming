#include "hash_tables.h"

/**
* hash_table_create - function that createsa hash table.
* @size: size of the array(hash table).
* Return: returns a pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	(*table).size = size;
	(*table).array = malloc(sizeof(hash_node_t) * size);

	if (!(*table).array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
