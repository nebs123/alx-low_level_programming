#include "hash_tables.h"

/**
 * hash_table_set - set the key/value pair on the hash table
 * @ht: hash table to put the key/value pair in
 * @key: the key to be added to the table
 * @value: value associated with the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL)
		return (0);
	if (*key == '\0')
		return (0);

	return (set_element_arr(ht->array, index, key, value));
}


/**
 * set_element_arr - adds element to array at given index
 * @array: array of hash_node_t pointers
 * @index: index to put the hash_node_t created
 * @key: key of the new element to be added
 * @value: value of the new element to be added
 * Return: 1 on success otherwise 0
 */
int set_element_arr(hash_node_t **array, unsigned long int index,
		    const char *key, const char *value)
{
	hash_node_t *ptr = array[index];
	hash_node_t *node;


	while (ptr && strcmp(key, ptr->key))
	{
		ptr = ptr->next;
	}
	if (ptr)
	{
		node = ptr;
		free(node->value);
		node->value = strdup(value);
	} else
	{
		node =  malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = key;
		node->value = strdup(value);
		node->next = array[index];
		array[index] = node;
	}
	return (1);
}
