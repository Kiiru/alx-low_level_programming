#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - Operation to free a list
 * @head: list
 * Return: new node or null if failed
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return
	
	free_listint(head->next);
	free(head);
}
