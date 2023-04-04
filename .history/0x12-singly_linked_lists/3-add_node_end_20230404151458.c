#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - operation to add node to the end
 * of a list
 * @head: pointer to pointer of a list
 * @str: data for a new node
 * Return: length
*/
list_t *add_node_end(list_t **head, const char *str);