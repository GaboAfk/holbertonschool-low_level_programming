/*
 * File: 3-add_dnodeint_end.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - function that adds a new node at the
 *									end of a dlistint_t list.
 * @head: pointer to a double linked list pointer.
 * @n: number to load.
 * Return: first node (Success). NULL (Fail).
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	if (!head)
		return (NULL);

	new = *head;

	if (!new) /*primer nodo*/
	{
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (new->next) /*me paro en el ultimo nodo*/
			new = new->next;

		aux = malloc(sizeof(dlistint_t));
		aux->n = n;
		aux->prev = new;
		new->next = aux;
		aux->next = NULL;
	}

	return (*head);
}
