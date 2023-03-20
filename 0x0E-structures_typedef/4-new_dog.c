#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return:  apointer to the created dog;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}
