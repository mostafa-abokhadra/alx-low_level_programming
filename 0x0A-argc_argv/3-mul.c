#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: arg count
  * @argv: arg list
  *
  * Description: printing sum of two given arg
  * Return: zero to end
  */
int main(int argc, char **argv)
{
		int sum = 1;

		if (argc == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			int i;

			for (i = 1; i < argc; i++)
			{
				sum *= atoi(argv[i]);
			}
			printf("%d\n", sum);
		}

		return (0);
}
