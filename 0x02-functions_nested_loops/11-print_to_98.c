#include "main.h"

/**
  * print_single - print one digit nums
  *@i: the one digit num
  *
  * Description: printing num using it's ascii code
  *
  * Return: no return value for void function
  */
void print_single(int i)
{
		if(i < 0)
		{
			_putchar('-');
			_putchar('0' + (i - i - i));
		}
		else
		{
			_putchar('0' + i);
		}
		_putchar(',');
		_putchar(' ');
}

/**
  * convert - converting two digit numbers to printable values
  * @num: the 2 digits of more num needs to be converted
  *
  * Description: by the last digit of the number we print
  * it's ascii value
  *
  * Return: no return value for void function
  */
void convert(int num)
{
		int arr [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i, t = num, j = 0;
		
		if (num < 0)
		{
			_putchar('-');
			t = num -num -num;
		}
		while(t)
		{
			arr[j] = t % 10;
			t /= 10;
			j++;
		}
		j--;
		for (j ; j >= 0 ; j--)
		{
			_putchar('0' + arr[j]);
		}
		if (num != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		j = 0;
}

/**
  * print_to_98 - prints nums to 98
  * @n: starting point of printing to 98
  *
  * Description: given a starting num we are printing to 98
  *
  * Return: no return value for void function
  */
void print_to_98(int n)
{
		int i;

		for (i = n ; i <= 98 ; i++)
		{
			if (i >= -9 && i <= 9)
			{
				print_single(i);
			}
			else
			{
				convert(i);
			}
		}
		if (n > 98)
		{
			for (i = n ; i >= 98 ; i--)
			{
    				convert(i);
			}
		}
		_putchar('\n');
}

