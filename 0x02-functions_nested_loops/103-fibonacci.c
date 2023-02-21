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
	long sum;

	sum = 0;
	i = 1;
	j = 2;
	while (i <= 4000000 && j <= 4000000)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		else if (j % 2 == 0)
		{
			sum += j;
		}
		i += j;
		j += i;
	}
	printf("%li\n", sum);
	return (0);
}
