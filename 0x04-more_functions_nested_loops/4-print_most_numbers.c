#include "main.h"

/**
  * print_most_numbers - except 2 and 4
  *
  * Description: printing from 0 to 9 but not 2 and 4
  *
  * Return: nothing
  */
void print_most_numbers(void)
{
		int i;

		for (i = 0 ; i <= 9 ; i++)
		{
			if (i != 2 || i != 4)
			{
				_putchar('0' + i);
			}
		}
		_putchar('\n');
}

