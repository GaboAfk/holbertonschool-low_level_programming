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
	
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	aux = *head;

	if (!aux) /*primer nodo*/
		*head = new;
	else
	{
		while (aux->next) /*me paro en el ultimo nodo*/
			aux = aux->next;

		aux->next = new;
		new->prev = aux;
	}
	
	return (new);
}
