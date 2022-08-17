#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the memory allocated for list_t
 * @head: address to a pointer to the head of the list
 *
 * Return: void (no return)
 */
void free_listint2(listint_t **head)
{
	listint_t *head2;

	if (head == NULL)
		return;
	head2 = *head;
	while (head2 != NULL)
	{
		listint_t *temp;

		temp = head2->next;
		free(head2);
		head2 = temp;
	}
	*head = NULL;
}
