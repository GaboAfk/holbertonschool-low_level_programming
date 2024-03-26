/*
 * File: 2-add_dnodeint.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * dlistint_t *add_dnodeint - function that adds a new node at the
 *								beginning of a dlistint_t list.
 * @head: pointer to a double linked list.
 * @n: number to add.
 * Return: the address of the new element (Success). NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
