#include "lists.h"

/**
 * add_dnodeint - adds new node at the head location specified
 * @head: pointer to a pointer of the head node
 * @n: integer to asssign the new node
 *
 * Return: the newly created node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	if (*head)
	{
		new->prev = (*head)->prev;
		(*head)->prev = new;
	} else
	{
		new->prev = NULL;
	}
	*head = new;
	return (new);
}
