#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 *
 * @s : string to reverse
 */

void rev_string(char *s)
{
	int sindex;
	int revindex;
	char rev[sizeof(s)];

	sindex = strlen(s);
	revindex = 0;
	while (sindex >= 0)
	{
		rev[revindex] = s[sindex];
		sindex--;
		revindex++;
	}
	*s = *rev;
}
