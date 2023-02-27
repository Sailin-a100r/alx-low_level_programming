#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 *
 * @s : string to reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	int con;
	char temp[sizeof(s) - 1];

	con = strlen(s);
	j = strlen(s) - 1;
	for (i = 0; i <= con; i++)
	{
		temp[i] = s[i];
	}

	for (i = 0; i < con; i++)
	{
		s[i] = temp[j];
		j--;
	}


}
