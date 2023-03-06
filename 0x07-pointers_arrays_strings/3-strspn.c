#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to search
 * @accept: bytes to accept from s
 *
 * Return: number of bytes accepted
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, j;

	n = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
