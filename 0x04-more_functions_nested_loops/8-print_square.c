#include "main.h"

/**
  * print_square - printing square shape
  * @size: the size of the square to be printed
  *
  * Description: printing # as the square lines if size > 0
  * new line if zero or less
  *
  * Return: nothing
  */
void print_square(int size)
{
		int i, j;

		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 1 ; i <= size ; i++)
			{
				for (j = 1 ; j <= size ; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
}

