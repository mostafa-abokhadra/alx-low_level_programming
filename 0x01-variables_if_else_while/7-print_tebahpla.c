#include<stdio.h>

/**
  * main - entry point
  *
  * Description: print reversed alphabet in lower case
  *
  * Return: 0 to end the program
  */

int main(void)
{
		int i;

		for (i = 'z'; i >= 'a'; i--)
			putchar(i);
		putchar('\n');
		return (0);
}
