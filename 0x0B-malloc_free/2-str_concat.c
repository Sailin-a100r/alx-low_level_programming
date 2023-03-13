#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int lens1, lens2, i, j;
	int lenstring;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = strlen(s1);
	lens2 = strlen(s2);
	lenstring = lens1 + lens2 + 1;
	string = malloc(lenstring);
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < lens2)
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[lenstring - 1] = '\0';
	return (string);
}
