#include<stdio.h>

/**
  * main - entry point
  *
  * Description: printing base 10 numbers
  * seperated by coma and space
  *
  * Return: 0 to end the program
  */

int main(void)
{
		int i;

		for (i = '0' ; i <= '9' ; i++)
		{
			putchar(i);
			if (i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
}
