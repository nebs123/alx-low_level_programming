#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the memory allocated for list_t
 * @head: pointer to the head of the list
 *
 * Return: void (no return)
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp;

		temp = head->next;
		free(head);
		head = temp;
	}
}
