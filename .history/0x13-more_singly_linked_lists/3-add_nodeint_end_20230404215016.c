#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - Operation to add a node at the end of a list
 * @head: list
 * @n: data
 * Return: new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *tail, *dup;

	tail = (listint_t *) malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	
	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
		return (tail);

	dup = *head;

	while (dup->next != NULL)
		dup = dup->next;
	
	dup->next = tail;

	return (tail);
}
