/*
 * File: 0-print_list.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list to print.
 * Return: the numbre of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *p = h;

	while (p)
	{
		if (p->str)
			printf("[%d] %s\n", p->len, p->str);
		else
			printf("[0] (nil)\n");

		count++;
		p = p->next;
	}
	return (count);
}
