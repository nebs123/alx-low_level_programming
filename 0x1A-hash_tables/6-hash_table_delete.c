#include "hash_tables.h"

/**
 * hash_table_delete - deletes the memory allocated for hash table
 * @ht: pointer to the hash table
 *
 * Return: void (no return)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *prev;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		while (node)
		{
			prev = node;
			node = node->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
