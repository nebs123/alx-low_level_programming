#include "lists.h"

/**
 * sum_listint - sums the elements of listint_t
 * @head: beginning of the list
 *
 * Return: sum of the elements of the list, if empty returns 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
