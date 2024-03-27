/*
 * File: 6-sum_dlistint.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 *					the data (n) of a dlistint_t linked list.
 * @head: double linked list pointer.
 * Return: sum of all data. 0 if @head is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *aux = head;

	while (aux)
	{
		res += aux->n;
		aux = aux->next;
	}
	return (res);
}
