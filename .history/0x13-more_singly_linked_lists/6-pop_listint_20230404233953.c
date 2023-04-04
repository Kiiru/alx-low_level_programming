#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - Operation to pop/delete the head node
 * @head: list
 * Return: head node's data(n)
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	if (temp == NULL)
		return (0);
	*head = temp;
	free(temp);

	return (n);
}