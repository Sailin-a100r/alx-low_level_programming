#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to search
 * @c: character to search for
 *
 * Return: a pointer to the first occurence of the char in the string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
