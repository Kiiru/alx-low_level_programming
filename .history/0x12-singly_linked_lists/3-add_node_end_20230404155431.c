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
 * _strdup - recreation of string duplicate function
 * @src: source of string to duplicate
 * Return: pointer to malloc'd space with copied string
 */
void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = charLen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
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
	int len;
	char *dupS;
	list_t *tail, *dupN;

	if(str == NULL)
		return(NULL);

	len = charLen(str);

	dupS = _strdup(str);
	tail = (list_t *) malloc(sizeof(list_t));
	if (tail == NULL)
	{
		return (NULL);
	}
	tail->len = len;
	tail->str = dupS;
	tail->next = NULL;
	if (*head == NULL)
	{
		*head = tail;
		return (*head)
	}
	dupN = *head;
	while (dupN->next != NULL)
		dupN = dupN->next;
	dupN->next = tail;
	return (*head);
}
