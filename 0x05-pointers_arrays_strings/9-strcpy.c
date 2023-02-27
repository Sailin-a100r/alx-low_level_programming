#include "main.h"
#include <string.h>

/**
 * _strcpy - function  that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest : pointer to destinstion of copied string;
 * @src : pointer to source string;
 *
 * Return: pointer to dest;
 */

char *_strcpy(char *dest, char *src)
{
	int n;
	int i;

	n = strlen(src);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
