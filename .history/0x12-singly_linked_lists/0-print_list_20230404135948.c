#include "lists.h"

/**
 * print_list - Operation to print all the nodes of a list
 * @h: list of nodes 
 * Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (%s)", 0, "nill");
		else
			printf("[%d] (%s)", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}