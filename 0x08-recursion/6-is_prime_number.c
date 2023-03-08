#include "main.h"

/**
 * is_prime_number - function that checks if the number is prime or not
 *
 * @n: number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	int x;

	if (n < 2 || n % 2 == 0)
	{
		return (0);
	}
	else if (n == 2 || n == 3)
	{
		return (1);
	}
		
