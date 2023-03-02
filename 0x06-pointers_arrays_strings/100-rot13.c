#include "main.h"
#include <string.h>

/**
 * rot13 - function that encodes a string into rot13
 *
 * @str: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i;
	int j;
	int length;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < 56; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}
	return (str);
}
