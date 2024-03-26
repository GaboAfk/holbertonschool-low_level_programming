/*
 * File: 1-dlistint_len.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *					in a linked dlistint_t list.
 * @h: double list pointer
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
