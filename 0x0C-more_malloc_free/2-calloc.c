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
	char *p;
	int bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = nmemb * size;
	p = malloc(bytes);
	if (p == NULL)
		return (NULL);

	while (bytes >= 0)
	{
		p[bytes]  = '\0';
		bytes--;
	}
	return ((void *)p);

}
