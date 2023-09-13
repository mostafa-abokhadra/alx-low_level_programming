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
		int n1 = 1, n2 = 2, c = 0;
		while (c < 4000000)
		{
			c = n1 + n2;
			if (c % 2 == 0)
			{
				n2 += c;
			}
			n1 = n2; n2 = c;
		}
		printf("%d\n", c);
		return (0);
}

