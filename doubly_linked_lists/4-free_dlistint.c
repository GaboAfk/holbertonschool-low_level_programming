/*
 * File: 4-free_dlistint.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: double linked list pointer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;

		free(aux);
		aux = NULL;
	}
}
