#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string to get its length
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		n = 0;
	}
	else
	{
		n = _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
