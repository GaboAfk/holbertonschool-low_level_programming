/*
 * File: 1-list_len.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * list_len - function that returns the number of elements
 *				 in a linked list_t list.
 * @h: list.
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *p = h;

	while (p)
	{
		count++;
		p =	p->next;
	}
	return (count);
}
