#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet
  *
  * Description: printing from a to z 10 times
  *
  * Return: no return value for void function
  */

void print_alphabet_x10(void)
{
		int i, j;

		for (i = 0 ; i < 10 ; i++)
		{
			for (j = 'a' ; j <= 'z' ; j++)
			{
				_putchar(j);
			}
			_putchar('\n');
		}
}

