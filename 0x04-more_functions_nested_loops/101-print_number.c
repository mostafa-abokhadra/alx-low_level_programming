#include "main.h"

/**
  * printnegative - only print -ve integers
  * @n: the negative number to be printed
  *
  * Description: converting each remainder to positive
  *
  * Return: nothing
  */
void printnegative(int n)
{
		if (n == 0)
		{
			_putchar('-');
			return;
		}

		printnegative(n / 10);
		_putchar('0' + ( - (n % 10)));
}

/**
  * realprint - print an integer
  * @real: the num to be printed
  *
  * Description: printing out only positive values
  *
  * Return: nothing
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
  * printzero - print 0
  * @zero: 0 number itself
  *
  * Description: printing zero varible
  *
  * Return: zero variable
  */
int printzero(int zero)
{
		return (zero);
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
			_putchar('0' + printzero(n));
			return;
		}
		else if (n < 0)
		{
			printnegative(n);
		}
		else
		{
			realprint(n);
		}
}
