/*
 * File: 4-new_dog.c
 * Auth: Gabriel Morffe
 */

#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - return the length of a string
 * @s: string.
 *
 * Return: len.
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
/**
 * *_strcpy - copy string from @src to @des.
 * @dest: array.
 * @src: string to copy.
 * Return: string @src in @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * *_strdup - using malloc for allocated space, which contains a copy of
 *				the string given as a parameter.
 * @str: string to duplicate.
 * Return: pointer to a copy of @str. NULL if str = NULL or insufficient
 *				memor was available.
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

	if (name == NULL || owner == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = _strcpy(new->name, name);

	new->age = age;

	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->owner = _strcpy(new->owner, owner);

	return (new);
}
