#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - Operation to print all the nodes of a list
 * @h: list of nodes list_t
 * Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (%s)\n", 0, "nill");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
