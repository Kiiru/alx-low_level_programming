#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - Operation to pop/delete the head node
 * @head: list
 * Return: head node's data(n)
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp, *current;

	if (head == NULL)
		return (0);
	current = temp = *head;
	if (*head)
	{
		n = (*head)->n;
		*head = current->next;
		free(current);
		return (n);
	}
	else
	{
		return (0);
	}

	return (0);
}
