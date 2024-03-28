/*
 * File: 8-delete_dnodeint.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 *								dlistint_t linked list.
 * @head: pointer to a double linked list pointer.
 * @index: index of the node that should be deleted, start at 0.
 * Return: 1 (Success). -1 (Fail).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int pos = 0;

	if (!head)	/*lista vacía*/
		return (-1);

	while (aux && pos < index)
	{
		aux = aux->next;
		pos++;
	}

	if (!aux)	/*llegué al final*/
		return (-1);

	if (aux->prev)
		aux->prev->next = aux->next;
	else		/*primer nodo*/
		*head = (*head)->next;

	if (aux->next)
		aux->next->prev = aux->prev;

	free(aux);
	aux = NULL;

	return (1);
}
