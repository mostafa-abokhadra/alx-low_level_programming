#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This program calculates and prints the sum of integers
 * provided as command-line arguments. If any argument is not a valid integer,
 * it prints an error message.
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0, check = 1;

	/* Check if there are no arguments */
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		/* Iterate through command-line arguments */
		for (i = 1; i < argc; i++)
		{
			/* Check if each character in the argument is a digit */
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					continue;
				}
				else
				{
					/* If non-digit character found, set check flag to 0 */
					check = 0;
					break;
				}
			}
		}

		/* If all arguments are valid integers, calculate their sum */
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
			/* If non-integer argument found, print an error message */
			printf("Error\n");
			return (1);
		}
	}

	return (0);
}
