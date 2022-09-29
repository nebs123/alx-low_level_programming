#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given index in dlistint_t
 * @h: pointer to a pointer to the head
 * @idx: index in which to insert newly created node
 * @n: integer value for the new node
 * Return: pointer to the newly created node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *h;
	dlistint_t *prev = NULL;
	unsigned int x = 0;

	if (!new)
		return (NULL);

	new->n = n;
	while (ptr && x < idx)
	{
		prev = ptr;
		ptr = ptr->next;
		x++;
	}

	if (idx != x)
		return (NULL);
	if (prev)
	{
		prev->next = new;
		new->prev = prev;
		if (ptr)
		{
			ptr->prev = new;
		}
		new->next = ptr;
	} else
	{
		new->prev = NULL;
		new->next = ptr;
		if (ptr)
		{
			ptr->prev = new;
		}
		*h = new;
	}
	return (new);
}
