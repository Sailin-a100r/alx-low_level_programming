#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that free a dog_t instance
 *
 * @d: pointer to a dog_t
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
