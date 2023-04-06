#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 *
 * @b: string of 0 and 1 chars
 *
 * Return: the converted number or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, digit;
	int i, n = 0;

	/* empty or null string */
	if (!b)
		return (0);

	/* check string */
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	/* count */
	while (i)
	{
		digit = b[i - 1] - 48;
		num = num + (digit << (n));
		i--;
		n++;
	}
	return (num);
}
