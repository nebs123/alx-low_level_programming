#include "dog.h"

/**
 * init_dog - initializes the passed struct dog
 * @d: pointer to the struct element
 * @name: pointer to the string which is name of dog
 * @age: age of the dog
 * @owner: pointer to string which is name of dog owner
 * Return: void (no return)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
