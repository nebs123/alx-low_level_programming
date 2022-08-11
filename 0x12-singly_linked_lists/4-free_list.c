#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the memory allocated for list_t
 * @head: pointer to the head of the list
 *
 * Return: void (no return)
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp;

		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
