#include <stdio.h>
#include <string.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  * main - entry point
  * @ac: args count
  * @av: args list
  *
  * Discription: handling errors
  * Return: zero
  */
int main(int ac, char *av[])
{
		int a, b;
		int (*ptr)(int, int);

		if (ac > 4)
		{
			printf("Error\n");
			exit(98);
		}
		if ((strcmp(av[2], "/") == 0 && strcmp(av[3], "0") == 0) ||
			(strcmp(av[2], "%") == 0 && strcmp(av[3], "0") == 0))
		{
			printf("Error\n");
			exit(100);
		}
		if (strcmp(av[2], "+") != 0 && strcmp(av[2], "-") != 0 &&
			strcmp(av[2], "/") != 0 && strcmp(av[2], "*") != 0 &&
				strcmp(av[2], "%") != 0)
		{
			printf("Error\n");
			exit(99);
		}

		a = atoi(av[1]);
		b = atoi(av[3]);
		ptr = get_op_func(av[2]);
		if (ptr == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		else
		{
			printf("%d\n", ptr(a, b));
		}
		return (0);
}
