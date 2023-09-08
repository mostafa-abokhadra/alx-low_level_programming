#include<stdio.h>

/**
  * main - entry point
  *
  * Description: print alphabet in both
  * lower case and upper case
  *
  * Return: 0 to end the program
  */

int main(void)
{
		int i;

		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		for (i = 'A'; i <= 'Z'; i++)
			putchar(i);
		putchar('\n');
		return (0);
}
