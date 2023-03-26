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
	char *name, age, owner;

	if (d != NULL)
	{
		name = (d->name == NULL) ? "(nil)" : d->name;
		age = ((int)d->age == NULL) ? "(nil)" : (char)d->age;
		owner = (d->owner == NULL) ? "(nil)" : d->owner;

		printf("Name: %s", name);
		printf("Age: %s", age);
		printf("Owner: ")
	}
}