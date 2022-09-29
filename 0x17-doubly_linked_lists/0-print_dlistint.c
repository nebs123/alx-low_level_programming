#include "lists.h"

/**
 * print_dlistint - print the integers from dlistint_t list
 * @h: the list whose elements are to be printed
 *
 * Return: returns the number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
