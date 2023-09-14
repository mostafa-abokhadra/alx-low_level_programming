#include "main.h"

/**
  * print_line - printing to n number underscore
  * @n: number of underscore to be printed
  *
  * Description: using putchar func to print undercore
  *
  * Return: nothing
  */
void print_line(int n)
{
		int i;

		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
}

