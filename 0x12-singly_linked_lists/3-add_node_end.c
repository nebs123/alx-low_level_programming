#include "lists.h"
#include <stdlib.h>
#include <string.h>
unsigned int str_len(const char *str);

/**
 * add_node_end - adds node at the end of the list
 * @head: address of the pointer to the head of list
 * @str: string to be put in new node
 *
 * Return: NULL on failure or pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *next, *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = NULL;
	if (!*head)
	{

		*head = new;
	} else
	{

		next = *head;

		while (next->next != NULL)
		{
			next = next->next;
		}

		next->next = new;
	}

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
