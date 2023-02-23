#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: 0 success
 */

int main(void)
{
	long number;
	long div;
	long max;

	number = 612852475143;
	div = 3;
	while (1)
	{
		if (number % div != 0)
		{
			div++;
		}
		else
		{
			number /= div;
			if (number == 1)
			{
				max = div;
				printf("%li\n", max);
				return (0);
			}
		}
	}
}
