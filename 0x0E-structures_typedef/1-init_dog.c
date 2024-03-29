#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 *
 * @d: variable name
 * @name: dog name
 * @age: dog's age
 * @owner: name of owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
