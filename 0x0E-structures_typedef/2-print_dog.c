#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dog - Operation to print dog
 * @d: Struct
 * Return: void
*/
void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d != NULL)
	{
		name = (d->name == NULL) ? "(nil)" : d->name;
		owner = (d->owner == NULL) ? "(nil)" : d->owner;

		printf("Name: %s\n", name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", owner);
	}
}
