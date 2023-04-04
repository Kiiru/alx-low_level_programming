#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - Operation to return nth node of listint_t list
 * @head: list
 * 
 * Return: head node's data(n)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);