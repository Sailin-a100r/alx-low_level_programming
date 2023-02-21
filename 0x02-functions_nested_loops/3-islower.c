#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: the character to check
 *
 * Return: 1 (c is lower case)
 *
 */

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
