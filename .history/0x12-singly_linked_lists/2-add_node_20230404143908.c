#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * /
*/
int charLen(char *str)
{
	int i = 0;

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
	char *dup;
	list_t *new;

	len


}