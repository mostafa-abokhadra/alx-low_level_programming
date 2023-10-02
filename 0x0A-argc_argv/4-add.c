#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: arg count
  * @argv: list of arg
  *
  * Description: sum of arguments
  *
  * Return: 0 on success, 1 on failure
  */
int main(int argc, char **argv)
{
		int i, j, sum = 0, check = 1;

		if (argc == 1)
		{
			printf("0\n");
		}
		else
		{
			for (i = 1; i < argc; i++)
			{
				for (j = 0; argv[i][j] != '\0'; j++)
				{
					if (argv[i][j] >= '0' && argv[i][j] <= '9')
					{
						continue;
					}
					else
					{
						check = 0;
						break;
					}

				}
			}

			if (check)
			{
				for (i = 1; i < argc; i++)
				{
					sum += atoi(argv[i]);
				}
				printf("%d\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);

			}
		}
		return (0);
}
