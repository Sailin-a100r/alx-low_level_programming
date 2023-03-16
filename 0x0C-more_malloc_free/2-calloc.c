#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array of nmemb elements
 * each is of size bytes.
 *
 * @nmemb: number of elements of an array
 * @size: size of each element fo the array
 *
 * Return: pointer to the allocated memory, NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	return (p);

}
