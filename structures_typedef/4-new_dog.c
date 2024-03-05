/*
 * File: 4-new_dog.c
 * Auth: Gabriel Morffe
 */

#include "dog.h"
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - using malloc for allocated space, which contains a copy of
 *                              the string given as a parameter.
 * @str: string to duplicate.
 * Return: pointer to a copy of @str. NULL if str = NULL or insufficient
 *                              memor was available.
 */
char *_strdup(char *str)
{
	char *a;
	int i, size = 0;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	a = malloc((size + 1) * sizeof(*str));

	if (a != NULL)
	{
		for (i = 0; i < size; i++)
			a[i] = str[i];
	}
	else
		return (NULL);
	return (a);
}
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

	new->name = _strdup(name);

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->age = age;

	new->owner = _strdup(owner);

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
