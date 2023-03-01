#include "main.h"
#include <string.h>

/**
 * leet - function that encodes a string into 1337
 *
 * @str: string to encode
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i;
	int j;
	int length;
	char letters[10] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };
	char code[5] = { '4', '3', '0', '7', '1' };

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = code[j / 2];
			}
		}
	}
	return (str);
}
