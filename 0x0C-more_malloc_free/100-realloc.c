#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function that allocates am memory
 * block using malloc and free
 *
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *oldptr;
	int i, old, new;

	old = old_size;
	new = new_size;
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return ((void *) newptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		oldptr = (char *) ptr;
		for (i = 0; i < old; i++)
		{
			newptr[i] = oldptr[i];
		}
		free(ptr);
		return ((void *) newptr);
	}
	else if (new_size < old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		oldptr = (char *) ptr;
		for (i = 0; i < new; i++)
		{
			newptr[i] = oldptr[i];
		}
		free(ptr);
		return ((void *) newptr);
	}
	return (ptr);
}
