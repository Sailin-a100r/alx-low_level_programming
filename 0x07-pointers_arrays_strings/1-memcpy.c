#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
