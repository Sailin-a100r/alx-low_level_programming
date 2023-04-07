#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 0x254689;

	char *byte = (char *) &x;
	if (*byte == 0x25)
		return (0);
	return (1);
}
