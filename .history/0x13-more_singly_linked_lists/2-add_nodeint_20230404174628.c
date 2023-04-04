#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - Operation that returns # elements of a list list_t
 * @head: list
 * @n: data
 * Return: new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return NULL;
	
	new->n = n;
	if (*head == NULL)
		return (new);
	new->next
}