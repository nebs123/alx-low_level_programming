#include "lists.h"

/**
 * dlistint_len - print the integers from dlistint_t list
 * @h: the list whose elements are to be counted
 *
 * Return: returns the number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
