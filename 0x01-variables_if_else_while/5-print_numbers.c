#include<stdio.h>

/**
  * main - entry point
  *
  * Description: printing to stdout base 10 numbers
  *
  * Return: 0 to end the program
  */

int main(void)
{
		int i;

		for (i = '0'; i <= '9'; i++)
			putchar(i);
		putchar('\n');
		return (0);
}
