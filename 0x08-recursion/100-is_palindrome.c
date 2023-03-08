#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that checks if string is palindrome
 *
 * @s: string to check
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l = strlen(s);
	if (s[0] == s[l - 1])
	{
		is_plaindrome(s - 1);
	}
	else
	{
		return (is_palindrome())
