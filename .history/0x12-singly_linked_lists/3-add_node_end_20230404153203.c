#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * charLen - operation to count char in string
 * @str: string
 * Return: length
*/
int charLen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node_end - operation to add node to the end
 * of a list
 * @head: pointer to pointer of a list
 * @str: data for the new tail node
 * Return: the new tail
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i, len;
	char *dupS;
	list_t *tail;

	if(head == NULL || str == NULL)
		return(NULL);

	len = charLen(str);
	dupS = (char *) malloc(len * sizeof(char));
	if (dupS == NULL)
		return (NULL);
	i = 0;
	dupS = strdup(str);
	tail = (list_t *) malloc(sizeof(list_t));
	if (tail == NULL)
	{
		free(dupS);
		return (NULL);
	}
	tail->len = len;
	tail->str = dupS;
	tail->next = NULL;
	while (*head->next != NULL)
	{
		h
	}
}