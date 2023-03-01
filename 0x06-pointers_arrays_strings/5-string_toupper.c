#include "main.h"
#include <string.h>

/**
 * string_toupper - function that changes all lowercase chracters
 * in a string to uppercase
 * @str: string to change
 * Return: a pointer to the changed string
 */

char *string_toupper(char *str)
{
	int length;
	int i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
