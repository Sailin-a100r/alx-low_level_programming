#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * @c: input to be checked
 * Return: 1 (c is a letter), 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 79 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
