#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that checks if the number is prime or not
 *
 * @n: number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (isprime(n, n - 1));
	}
}

/**
 * isprime - function that checks for prime numbers
 *
 * @num: number to check
 * @var: number to check with
 *
 * Return: 1 if num is prime, 0 otherwise
 */

int isprime(int num, int var)
{
	if (var == 1)
	{
		return (1);
	}
	if (num % var == 0)
	{
		return (0);
	}
	return (isprime(num, var - 1));	
}
