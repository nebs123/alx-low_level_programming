#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in dlistint_t
 * @head: pointer to the head of the dlistint_t
 *
 * Return: sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
