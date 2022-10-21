#include "hash_tables.h"

/**
 * key_index - retrieves the index of key in an array of given size
 * @key: key for the hashtable
 * @size: size of the array of the hash table
 *
 * Return: an integer between 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
