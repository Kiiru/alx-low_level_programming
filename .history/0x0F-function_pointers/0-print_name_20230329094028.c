#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
 * print_name - Operation that prints name
 * @name: Pointer to name
 * @f: function pointer
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name )
}