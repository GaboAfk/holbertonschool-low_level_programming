/*
 * File: 2-print_dog.c
 * Auth: Gabriel Morffe
 */

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to dog structure.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
