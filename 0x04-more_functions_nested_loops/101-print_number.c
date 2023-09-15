#include "main.h"

/**
  * print_long - printing more than 2 digit nums
  * @n: the num to be printed
  * @c: if 1 the num is negative
  *
  * Description: using putchar and ascii value to print integers
  *
  * Return: nothing
  */
void print_long(int n, int c)
{
		if (n == 0 && c == 1)
		{
			_putchar('-');
			return;
		}
		else if (n == 0)
		{
			return;
		}
		else
		{
			print_long(n / 10, c);
			_putchar('0' + n % 10);
		}
}

/**
  * print_number - printing an integer
  * @n: the number to be printed
  *
  * Description: print out an integer from INT_MAX to INT_MIN
  *
  * Return: nothing
  */
void print_number(int n)
{
		int c = 0;

		if (n >= 0 && n <= 9)
		{
			_putchar (n + '0');
		}
		else
		{
			if (n < 0)
			{
				n = - n;
				c = 1;
			}
			print_long(n, c);
		}
}

