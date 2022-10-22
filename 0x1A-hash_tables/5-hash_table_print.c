#include "hash_tables.h"

/**
 * hash_table_print - prints the key-value pairs of the hash table
 * @ht: pointer to the hash table
 *
 * Return: void(no return)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		while (node)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			count++;
		}
	}
	printf("}\n");
}
