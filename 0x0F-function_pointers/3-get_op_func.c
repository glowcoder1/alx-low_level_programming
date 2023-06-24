#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	if (s == NULL)
		return (NULL);
	while (i < 5 && s[1] == '\0')
	{
		op_t curr = ops[i];

		if (curr.op[0] == s[0])
			return (curr.f);
		i++;
	}
	return (NULL);
}
