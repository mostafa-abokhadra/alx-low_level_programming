#include "main.h"

/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	signed long int size;
	char ch;
	int flg;

	size = sizeof(n) * (8 - 1);
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
	flg = 0;
	while (size >= 0)
	{
		ch = (n >> size) & 1;
		if (flg == 1)
			_putchar(ch + '0');
		else
		{
			if (ch == 1)
			{
				_putchar(ch + '0');
				flg = 1;
			}
		}
		size -= 1;
	}
}
