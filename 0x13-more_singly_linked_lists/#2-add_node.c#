#include "lists.h"
#include <stdlib.h>
#include <string.h>

unsigned int str_len(const char *);

/**
 * add_node - adds node at the beginning of the list
 * @head: address of the var containing the head
 * @str: string input for data of node
 *
 * Return: pointer to the new node or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * str_len - returns length of str
 * @str: the string input
 * Return: length of the string
 */
unsigned int str_len(const char *str)
{
	unsigned int count = 0;

	if (!str)
		return (0);
	while (*str++)
		count++;

	return (count);
}
