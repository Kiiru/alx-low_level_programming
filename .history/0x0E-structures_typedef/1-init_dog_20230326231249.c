#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit()
	d->name = name;
	d->age = age;
	d->owner = owner;
}