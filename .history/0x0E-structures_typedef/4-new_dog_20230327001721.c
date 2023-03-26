#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Operation to print dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner
 * Return: void
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n, o, i;

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	n = 0;
	while (name[n] != '\0')
		n++;
	o = 0;
	while (owner[o] != '\0')
		o++;
	dog->name = malloc(n * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i <= n)
		dog->name[i] = name[i], i++;
	dog->age = age;
	dog->owner = malloc(o * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i <= o)
		dog->owner[i] = owner[i], i++;
	return (dog);
}
