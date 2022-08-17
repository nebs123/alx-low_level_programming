#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_nodeint_end - adds node at the end of the list
 * @head: address of the pointer to the head of list
 * @n: int to be put into new node
 *
 * Return: NULL on failure or pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
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
