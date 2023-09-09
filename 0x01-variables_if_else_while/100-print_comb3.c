#include<stdio.h>

/**
  * main - entry point
  *
  * Description: printing to stdout
  * all possible different combinations of two digits
  *
  * Return: 0 to end the program
  */

int main(void)
{
		int i, j;

		for (i = '0' ; i <= '9'; i++)
		{
			for (j = i + 1 ; j <= '9'; j++)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
}
