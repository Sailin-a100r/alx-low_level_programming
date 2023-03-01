#include "main.h"
#include <string.h>

/**
 * cap_string - function that capitalizes all word of a string
 *
 * @str: string to capiatalize
 * Return: string after capitalization
 */

char *cap_string(char *str)
{
	int i;
	int length;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
		}
	}
	return (str);
}

