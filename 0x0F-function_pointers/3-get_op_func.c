#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_function - function to select the correct function
 * for the operation 
 *
 * @s : operator to select the function
 *
 * Return: pointer to the correct function to execute
 */

int (*get_op_function(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
