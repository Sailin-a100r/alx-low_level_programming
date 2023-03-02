#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a strings
 *
 * @dest: destination string to append to
 * @src: source string to append
 * @n: number of chars to copy
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int limit;

	limit = n < strlen(src) ? n : strlen(src);
	i = 0;
	while (i < limit)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
