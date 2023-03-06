#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: full string to search
 * @needle: the substring to look for
 *
 * Return: a pointer to the first char of the substring if found
 * and NULL if it is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}

