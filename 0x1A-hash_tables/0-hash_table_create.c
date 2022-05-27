#include "hash_tables.h"

/**
* hash_table_create - function that createsa hash table.
* @size: size of the array(hash table).
* Return: returns a pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	(*table).size = size;
	(*table).array = calloc(size, sizeof(hash_node_t));

	if (!(*table).array)
		return (NULL);

	return (table);
}
