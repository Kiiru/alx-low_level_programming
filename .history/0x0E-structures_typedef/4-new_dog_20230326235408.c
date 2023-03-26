#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dog - Operation to print dog
 * @d: Struct
 * Return: void
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	dog = (struct dog *) malloc(sizeof(struct dog));
}