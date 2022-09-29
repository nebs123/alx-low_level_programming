#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of the doubly linked list
 * @head: pointer to a pointer of the head
 * @n: the integer value for the new node
 *
 * Return: newly created node or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *penultimate = NULL;
	dlistint_t *ptr = *head;

	if (!new)
		return (NULL);
	new->n = n;
	while (ptr)
	{
		penultimate = ptr;
		ptr = ptr->next;
	}
	if (penultimate)
	{
		new->next = penultimate->next;
		new->prev = penultimate;
		penultimate->next = new;
	} else
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}
