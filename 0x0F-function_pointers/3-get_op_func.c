#include <string.h>
#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>

/**
  * get_op_func - chose a function
  * @s: upon operator we choose
  *
  * Description: getting the suitable function acc to operator
  *
  * Return: pointer to the function
  */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};
		int i = 0;

		while (i < 6)
		{
			if (strcmp(ops[i].op, s) == 0)
			{
				return (ops[i].f);
			}
			i++;
		}
		return (NULL);
}
