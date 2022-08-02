#include "dog.h"
#include <stdlib.h>

unsigned int str_len(char *);
char *copy_str(char *);

/**
 * new_dog - creates a new dog_t struct and intializes it
 * @name: name of the dog_t
 * @age: age of the dog_t
 * @owner: name of the owner of dog_t
 * Return: null on failure otherwise returns a new dog initialized
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cpy, *owner_cpy;
	dog_t *new_dog;

	if (name)
	{
		name_cpy = copy_str(name);
		if (!name_cpy)
			return (NULL);
	} else
		name_cpy = name;

	if (owner)
	{
		owner_cpy = copy_str(owner);
		if (!owner_cpy)
		{
			free(name_cpy);
			return (NULL);
		}
	} else
		owner_cpy = owner;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}
	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);
}

/**
 * str_len - gives the length of string
 * @str: input string
 * Return: size of the string input
 */
unsigned int str_len(char *str)
{
	unsigned int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * copy_str - copies inputted string to new memory
 * @str: string to be copied
 *
 * Return: returns NULL on failure else returns pointer to copied string
 */
char *copy_str(char *str)
{
	char *str_cpy;
	unsigned int n;

	str_cpy = malloc(sizeof(*str_cpy) * str_len(str) + 1);
	if (!str_cpy)
		return (NULL);

	for (n = 0; n < str_len(str); n++)
		*(str_cpy + n) = *(str + n);
	*(str_cpy + n) = '\0';

	return (str_cpy);
}
