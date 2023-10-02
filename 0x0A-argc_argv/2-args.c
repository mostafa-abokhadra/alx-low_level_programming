#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  * @argc: arguments count
  * @argv: arguments list
  *
  * Description: printing arguments of the program
  * Return: zero to end the program
  */
int main(int argc, char **argv)
{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return (0);
}
