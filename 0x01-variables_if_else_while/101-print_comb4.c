#include<stdio.h>

/**
  * main - entry point
  *
  * Description: printing to stdout
  * all possible different combinations of three digits
  *
  * Return: 0 to end the program
  */

int main(void)
{
		int i, j, k;

		for (i = '0' ; i <= '9'; i++)
		{
			for (j = i + 1 ; j <= '9'; j++)
			{
				for (k = j + 1; k <= '9'; k++)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
