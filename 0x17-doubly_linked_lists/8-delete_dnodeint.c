#include "lists.h"

/**
 * delete_dnodeint_at_index - remove node at given index from dlistint_t
 * @head: pointer to a pointer to the head
 * @index: index of the node to be deleted
 * Return: 1 on success -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *prev = NULL;
	dlistint_t *fwd = NULL;
	unsigned int x = 0;

	while (ptr && x < index)
	{
		prev = ptr;
		ptr = ptr->next;
		x++;
	}

	if (index != x || ptr == NULL)
		return (-1);
	if (prev)
	{
		fwd = ptr->next;
		prev->next = fwd;
		if (fwd)
			fwd->prev = prev;

	} else
	{
		fwd = ptr->next;
		*head = fwd;
		if (fwd)
			fwd->prev = NULL;
	}
	free(ptr);
	return (1);
}
