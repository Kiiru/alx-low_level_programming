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
	dog_t *dog;
	int n, o;

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	n = 0;
}