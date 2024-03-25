/*
 * File: 4-free_list.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: list of list_t to free.
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;

		free(aux->str);
		free(aux);
	}
}
