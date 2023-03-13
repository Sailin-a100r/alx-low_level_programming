#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * strtow - function that splits a string to words
 *
 * @str: string to split
 * Return: pointer to an array of words;
 */

char **strtow(char *str)
{
	char **result;
	int length, wordscount, num;
	int i, j, k;

	length = strlen(str);
	if (str == NULL || length == 0)
		return (NULL);
	i = wordscount = 0;
	while (i < length)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			wordscount++;
		i++;
	}
	result = malloc((wordscount + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	j = k = 0;
	for (i = 0; i < length; i++)
	{
		if (str[i] != ' ')
		{
			num = count(&str[i]);
			result[j] = malloc(num * sizeof(char));
			if (result[j] == NULL)
				return (NULL);
			while (num != 0)
			{
				result[j][k] = str[i];
				num--;
				k++;
				i++;
			}
			j++;
			k = 0;
		}
	}
	result[wordscount] = NULL;
	return (result);
}

/**
 * count - function that counts the chars of a word.
 *
 * @c: pointer to first char
 *
 * Return: number of chars in a word
 */

int count(char *c)
{
	int i, chars;

	i = chars = 0;
	while (c[i] != ' ')
	{
		if (c[i] != '\0')
		{
			chars++;
			i++;
		}
		else
			break;
	}
	return (chars);
}
