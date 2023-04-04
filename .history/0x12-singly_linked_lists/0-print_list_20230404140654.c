#include "lists.h"

/**
 * print_list - Operation to print all the nodes of a list
 * @h: list of nodes list_t
 * Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return ()

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
