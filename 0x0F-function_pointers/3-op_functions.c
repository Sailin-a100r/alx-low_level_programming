#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function that adds two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the operation
 */

int op_add(int a, int b)
{
	return a + b;
}

/**
 * op_sub - function that subtracts two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the operation
 */

int op_sub(int a, int b)
{
	return a - b;
}

/**
 * op_mul - function that multiplies two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the operation
 */

int op_mul(int a, int b)
{
	return a * b;
}

/**
 * op_div - function that divides two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the operation
 */

int op_div(int a, int b)
{
	return a / b;
}

/**
 * op_mod - function that gets
 * the modulus of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the operation
 */

int op_mod(int a, int b)
{
	return a % b;
}
