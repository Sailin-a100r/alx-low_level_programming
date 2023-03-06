#include "main.h"

/**
 * _strpbrk - function that searches for any of a set of bytes.
 *
 * @s: string to search inside
 * @accept: the set of bytes to look for
 *
 * Return: a pointer to the found byte
 * or NULL if none is found
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
