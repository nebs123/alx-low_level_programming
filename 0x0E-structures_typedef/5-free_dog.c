#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - releases memory allocated for a dog struct
 * @d: dog struct whose memory is to be deallocated
 *
 * Return: void (no return)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
