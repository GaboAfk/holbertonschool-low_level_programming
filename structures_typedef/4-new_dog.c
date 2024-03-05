/*
 * File: 4-new_dog.c
 * Auth: Gabriel Morffe
 */

#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: a dog_t pointer. NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);



	if (name == NULL || owner == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
