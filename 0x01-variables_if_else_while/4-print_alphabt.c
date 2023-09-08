#include<stdio.h>

/**
  * main - entry point
  *
  * Description: print alphabet in lower case
  * except the letters q and e
  *
  * Return: 0 to end the program
  */

int main(void)
{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			if (i == 'q' || i == 'e')
				continue;
			putchar(i);
		}
		putchar('\n');
		return (0);
}
