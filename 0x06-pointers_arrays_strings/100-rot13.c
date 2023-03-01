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
	char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
       'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z',
	 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
	 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char code[] = { 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z','a', 'b', 'c',
		 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		  'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J', 'K',
		  'L', 'M'};

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < 56; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = cod[j];
			}
		}
	}
	return (str);
}
