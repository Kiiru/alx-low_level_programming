#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - Operation to return nth node of listint_t list
 * @head: list
 * @index: nth 
 * Return: nth node or NULL on fail
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nthNode;

	if (head == NULL)
		return (NULL);
	
	i = 0;
	while (head->next != NULL)
	{
		if ()
	}
}