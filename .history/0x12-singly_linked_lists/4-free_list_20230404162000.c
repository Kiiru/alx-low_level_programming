#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Operation to free a list list_t
 * @head: list
 * Return: void
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	/**
	while (head ->next != NULL)
	{
		free((char *) head->str);
		head = head->next;
	}
	*/
	free_list(h)
}