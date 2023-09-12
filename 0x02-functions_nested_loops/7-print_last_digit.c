#include "main.h"

/**
  * print_last_digit - printing last digit to stdout
  * @num: the num to print it's last digit
  *
  * Description: returning a the remainder of a given number to 10
  *
  * Return: the remainder of the devesion of agiven num to 10
  */
int print_last_digit(int num)
{
		if (num < 0)
		{
			num = num % 10;
			num = num - num - num;
			_putchar('0' + num);
			return (num);
		}
		_putchar('0' + num % 10);
		return (num % 10);
}

