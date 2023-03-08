#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root
 * of a number
 *
 * @n: number to find its root
 *
 * Return: natural square root, or -1 if there isn't one
 */
int squareroot(int a, int set);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (squareroot(n, -1));
	}
}

/**
 * squareroot - function that returns the square root of a
 *
 * @a: number to find its root
 * @set: starting value
 *
 * Return: square root of a, or -1
 */

int squareroot(int a, int set)
{
	int ans;

	set++;
	ans = set * set;
	if (a == ans)
	{
		return (set);
	}
	else if (a < ans)
	{
		return (-1);
	}
	else
	{
		return (squareroot(a, set));
	}
}
