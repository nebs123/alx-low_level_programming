#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the elements of d if it is not null
 * @d: dog struct whose element is to be printed
 *
 * Return: void (no return)
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");

		printf("Age: %f\n", d->age);

		printf("Owner: ");
		if (d->owner)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
