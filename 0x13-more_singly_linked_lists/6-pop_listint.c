#include "lists.h"

/**
 * pop_listint - pops the 1st element of listint_t and returns the int
 * @head: address to the pointer of the head of the list
 *
 * Return: returns int data of the head node or 0 when the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *header;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	header = *head;
	*head = (*head)->next;

	return (header->n);
}
