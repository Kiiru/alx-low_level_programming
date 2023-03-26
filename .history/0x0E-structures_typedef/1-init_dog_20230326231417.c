#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - Operation to initialize dog
 * @d: Struct 
 * @name: Name of the dog
 * @age: Age of the dog
 * @
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(98);
	d->name = name;
	d->age = age;
	d->owner = owner;
}