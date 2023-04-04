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
	if (n == NULL)
		return (NULL);
	
	listint_t *tail;

	tail = (listint_t *) malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	
	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
		return (tail);
	while ((*head)->next != NULL)
		*head = (*head)->next;
	
	(*head)
}