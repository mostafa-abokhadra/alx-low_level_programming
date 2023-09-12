#include "main.h"

/**
  * print_sign - prints + or - or 0 accordingly
  *
  * @n: the num according to which we will print
  *
  * Description: printin + if n > 0 ,
  * -1 if < 0 and 0 if = to zero
  *
  * Return: 1 if n is +ve , -1 if n is -ve , zero if n is zero
  */
int print_sign(int n)
{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		_putchar('0');
		return (0);
}

