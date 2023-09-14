#include "main.h"

/**
  * print_numbers - printing from 0 to 9
  *
  * Description: using putchar func to print the ascii value
  *
  * Return: nothing
  */
void print_numbers(void)
{
		int i;

		for (i = 0 ; i <= 9 ; i++)
		{
			_putchar('0' + i);
		}

		_putchar('\n');
}
