#include "hash_tables.h"

/**
 * hash_table_get - retrieve value for the given key
 * @ht: pointer to hashtable
 * @key: string which is the key to search for
 *
 * Return: returns value associated with key or NULL if it can't find it
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = (ht->array)[index];

	while (node && strcmp(node->key, key))
	{
		node = node->next;
	}

	if (node)
		return (node->value);
	else
		return (NULL);
}
