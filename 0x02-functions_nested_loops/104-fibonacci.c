#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Success
 */

int main(void)
{
	long i;
	long j;
	int counter;

	i = 1;
	j = 2;
	for (counter = 0; counter < 49 ; counter++)
	{
		printf("%li, ", i);
		i += j;
		printf("%li", j);
		j += i;
		if (counter != 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
