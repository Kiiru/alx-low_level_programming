#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Operation to add a headnew node to the begining of a list
 * @h: list of nodes list_t
 * Return: number of nodes in the list
*/
list_t *add_node(list_t **head, const char *str);