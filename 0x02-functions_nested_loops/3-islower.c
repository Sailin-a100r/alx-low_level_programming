#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: the character to check
 *
 * Return: 1 (c is lower case)
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
