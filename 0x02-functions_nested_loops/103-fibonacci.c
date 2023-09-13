#include<stdio.h>
#include "main.h"

/**
  * main - entry point
  *
  * Description: prints sum of even values of fibo
  *
  * Return: nothing
  */
int main(void)
{
		int n1 = 1, n2 = 2, n3 = 0, c = 2;

		while (c < 4000000)
		{
			n3 = n1 + n2;
			if (n3 % 2 == 0)
			{
				c += n3;
			}
			n1 = n2;
			n2 = n3;
		}
		printf("%d\n", c);
		return (0);
}

