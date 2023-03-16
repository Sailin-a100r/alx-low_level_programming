#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return:  a pointer to the allocated space on succes,
 * process termination on failure with status value 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, s1len, s2len, num;

	num = n;
	s2len = strlen(s2);
	s1len = strlen(s1);
	if (num > s2len)
	{
		num = s2len;
	}
	p = malloc(s1len + num + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < num; i++)
	{
		p[s1len + i] = s2[i];
	}
	p[s1len + num] = '\0';
	return (p);
}

