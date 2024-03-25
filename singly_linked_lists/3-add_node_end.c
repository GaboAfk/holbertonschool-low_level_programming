/*
 * File: 3-add_node_end.c
 * Auth: Gabriel Morffe
 */

#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: list.
 * @str: string to copy.
 * Return: address of head node (Success). NULL (Fail).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	if (!head || !str)
		return (NULL);

	if (!*head) /*llegué al final*/
	{
		new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);

		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}

		while (new->str[i])
			i++;

		new->len = i;
		new->next = NULL;
		*head = new;
		return (*head);
	}

	return (add_node_end(&((*head)->next), str));
}
