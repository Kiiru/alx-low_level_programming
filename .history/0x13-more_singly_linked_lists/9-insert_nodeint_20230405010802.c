#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - Operation to insert node at a
 * given position
 * @head: pointer to pointer to listint_t list
 * @idx: the index of the list where the new node should be
 * added. Index starts at 0
 * @n: value of inserted node
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}