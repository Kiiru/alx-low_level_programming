#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - Operation to free a list, set head null
 * @head: list
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *top, *temp;

	if (head == NULL)
		return;

	top = *head;
	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
	
	
}