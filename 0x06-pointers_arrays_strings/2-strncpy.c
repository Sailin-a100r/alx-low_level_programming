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

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
