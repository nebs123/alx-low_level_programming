#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable and return a pointer to it
 * @size: size of the array for the hashtable
 * Return: NULL on failure otherwise pointer to hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;
	unsigned long int x;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
	{
		free(new_table);
		return (NULL);
	}

	for (x = 0; x < size; x++)
		*(array + x) = NULL;

	new_table->size = size;
	new_table->array = array;

	return (new_table);
}
