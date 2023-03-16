#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc then check it.
 *
 * @b: number of bytes to allocate
 *
 * Return:  a pointer to the allocated space on succes,
 * process termination on failure with status value 98.
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
