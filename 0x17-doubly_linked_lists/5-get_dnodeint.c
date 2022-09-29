#include "lists.h"

/**
 * get_dnodeint_at_index - retrieve node at index from doubly linked list
 * @head: pointer to the head of the list
 * @index: index of node to fetch
 *
 * Return: pointer to the node at index or null if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head && x < index)
	{
		head = head->next;
		x++;
	}

	return (head);
}
