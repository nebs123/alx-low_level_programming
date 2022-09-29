#include "lists.h"

/**
 * free_dlistint - free the space allocated for doubly linked list
 * @head: pointer to head of doubly linked list
 *
 * Return: void (no return)
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		if (head->next == NULL)
		{
			free(head);
			break;
		}

		head = head->next;
		free(head->prev);
	}
}
