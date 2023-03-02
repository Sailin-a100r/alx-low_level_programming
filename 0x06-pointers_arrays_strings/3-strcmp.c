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
	int i;

	lenofs1 = strlen(s1);
	lenofs2 = strlen(s2);
	if (!(lenofs1 == lenofs2))
	{
		if (lenofs1 > lenofs2)
		{
			return (15);
		}
		else
		{
			return (-15);
		}
	}
	else
	{
		for (i = 0; i < lenofs1; i++)
		{
			if (s1[i] == s2[i])
			{
				continue;
			}
			else
			{
				return (15);
			}
		}
	}
	return (0);
}
