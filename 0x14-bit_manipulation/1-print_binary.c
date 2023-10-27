#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 * Return: void
 */
/*
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
*/
void print_binary(unsigned long int n)
{
		int rem;

		if (n == 0 || n == 1)
		{
			_putchar(n + '0');
			return;
		}
		rem = n % 2;
		print_binary(n /= 2);
		_putchar(rem + '0');
}

