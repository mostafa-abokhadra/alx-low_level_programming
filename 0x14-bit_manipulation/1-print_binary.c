#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 * Return: void
 *

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

/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	signed long int size;
	char c;
	int flag;

	size = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	flag = 0;

	while (size >= 0)
	{
		c = (n >> size) & 1;

		if (flag == 1)
			_putchar(c + '0');
		else
		{
			if (c == 1)
			{
				_putchar(c + '0');
				flag = 1;
			}
		}

		size -= 1;
	}
}
