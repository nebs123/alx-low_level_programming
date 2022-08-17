#include "lists.h"
#include <stdlib.h>



/**
 * add_nodeint - adds new node at the beginning of the list
 * @head: address of the var containing the head
 * @n: int to put in node
 *
 * Return: pointer to the new node or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
