/*
 * File: 5-get_dnodeint.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *							of a dlistint_t linked list.
 * @head: double linked list pointer.
 * @index: index of the node, starting from 0.
 * Return: address to nth node (Success). NULL if don't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *aux;

	aux = head;

	while (aux && pos < index)
	{
		aux = aux->next;
		pos++;
	}

	if (pos != index || !aux)
		return (NULL);

	return (aux);
}
