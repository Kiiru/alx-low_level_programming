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
 * add_node - Operation to add a new head to a list
 * @head: pointer to mem address of list
 * @str: data of the head
 * Return: new list
*/
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *dupS;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	len = charLen(str);
	dupS = (char *) malloc(len * sizeof(char));
	if (dupS == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dupS[i] = str[i];
		i++;
	}
	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(dupS);
		return (NULL);
	}
	new->len = len;
	new->str = dupS;
	new->next = *head;
	*head = new;
	return (new);
}
