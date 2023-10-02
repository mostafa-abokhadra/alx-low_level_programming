#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  * @argc: count of passed arguments from shell
  * @argv: list of arguments
  *
  * Description: printing the number of the arguments
  * Return: zero to end
  */
int main(int argc, __attribute__((unused)) char **argv)
{
		printf("%d\n", argc - 1);
		return (0);
}
