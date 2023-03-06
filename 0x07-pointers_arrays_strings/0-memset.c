#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer to first byte of memory
 * @b: the constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}
	return (s);
}
