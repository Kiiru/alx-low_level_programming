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

	for (sum = 0; head; sum += head->n, head = head->next);

	return (sum);
}
