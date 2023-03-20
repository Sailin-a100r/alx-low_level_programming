#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to a struct dog
 */

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d == NULL)
		exit(0);

	name = d->name;
	owner = d->owner;
	age = d->age;

	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
