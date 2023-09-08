#include<stdio.h>

/**
  * main - entry point
  *
  * Description: print base 16 hexadecimal nums
  *
  * Return: 0 to end the program
  */

int main(void)
{
		int i;

		for (i = '0'; i <= '9'; i++)
			putchar(i);
		for (i = 'a'; i <= 'f'; i++)
			putchar(i);
		putchar('\n');
		return (0);
}
