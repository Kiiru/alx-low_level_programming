#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - Operation to sum elements in a node
 * @head: pointer to listint_t list
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	sum += head->

	return (sum);
}
