#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: destination string to append to
 * @src: source string to append
 * @n: number of chars to concatenate from source
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int lenofd, lenofs;

	j = 0;
	lenofs = strlen(src);
	i = strlen(dest);
	lenofd = n < lenofs ? n + strlen(dest) : lenofs + strlen(dest);
	for (; i < lenofd; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
