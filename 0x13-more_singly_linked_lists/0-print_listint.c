#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of input list
 * @h: input list
 *
 * Return: size of the listint_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
