#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - Operation to sum elements in a node
 * for (sum = 0; head; sum += head->n, head = head->next)
 * @head: pointer to listint_t list
 * Return: sum
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);