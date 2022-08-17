#include "lists.h"

/**
 * get_nodeint_at_index - fetches the node in list at given index
 * @head: pointer to the head of the list
 * @index: index for the node to be searched
 *
 * Return: node at index if it exists, if it doesn't exitst returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head && x < index)
	{
		x++;
		head = head->next;
	}

	return (head);
}
