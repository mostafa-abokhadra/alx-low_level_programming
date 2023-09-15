#include "main.h"
/**
  * realprint - print a num recursively
  * @real: the num to be printed
  *
  * Description: recurse to get last digit to print using putchar
  *
  * Return: nothing, to calling function
  */
void realprint(int real)
{
		int t;
		if (real == 0)
		{
			return;
		}

		t = real % 10;
		realprint(real /= 10);
		_putchar('0' + t);
}

/**
  * printzero - only print zero
  * @zero: zero number
  *
  * Description: return 0 and print it using put char
  *
  * Return: 0
  */
int printzero(int zero)
{
		return (0);
}

/**
  * print_number - printing a given num entry
  * @n: the num to be printed
  *
  * Description: just printing a given num using putchar only
  *
  * Return: nothing;
  */
void print_number(int n)
{
		if (n == 0)
		{
			_putchar('0' + (printzero(n)));
			return;
		}
		else if (n < 0)
		{
			_putchar ('-');
			n = n - n - n;
			realprint(n);
		}
		else
		{
			realprint(n);
		}
}

