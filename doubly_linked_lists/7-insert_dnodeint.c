/*
 * File: 7-insert_dnodeint.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 *								new node at a given position.
 * @h: pointer to double linked list pointer.
 * @idx: index of the list where the new node should be added. Start at 0.
 * @n: number to add.
 * Return: address of the new node. NULL if fails or is not possible to add
 *				the new node at index at @idx.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = NULL, *new = *h;
	unsigned int pos = 0;

	if (!h)
		return (NULL);

	if (idx == 0) /*idx 0 agregar al inicio*/
		return (add_dnodeint(&(*h), n));

	while (new && pos < idx)
	{
		new = new->next;
		pos++;
	}

	if (!new && pos == idx) /* agregar nodo al final */
		return (add_dnodeint_end(&new, n));

	if (!new && pos != idx) /*no hay suficientes nodos*/
		return (NULL);

	aux = new->prev;

	add_dnodeint(&new, n);

	if (aux)
		aux->next = new;

	new->prev = aux;

	return (new);
}
