#include "main.h"
#include <string.h>
/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 (if s1 matches s2),
 * positive value (if s1 greater than s2),
 * negative value (if s2 greater than s1).
 */

int _strcmp(char *s1, char *s2)
{
	int lenofs1;
	int lenofs2;
	int shorter;
	int i;

	lenofs1 = strlen(s1);
	lenofs2 = strlen(s2);
	shorter = lenofs1 > lenofs2 ? lenofs2 : lenofs1;
	if (!(lenofs1 == lenofs2))
	{
		return (s1[0] - s2[0]);
	}
	else
	{
		for (i = 0; i < shorter; i++)
		{
			if (s1[i] == s2[i])
			{
				continue;
			}
			else
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	return (0);
}
