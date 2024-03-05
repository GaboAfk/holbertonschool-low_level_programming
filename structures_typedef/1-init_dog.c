/*
 * File: 1-init_dog.c
 * Auth: Gabriel Morffe
 */

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to dog structure.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	struct dog new;

	new.name = name;
	new.age = age;
	new.owner = owner;

	*d = new;
}
