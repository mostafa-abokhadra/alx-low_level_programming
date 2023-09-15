#include "main.h"

/**
  * print_triangle - printing triangle shape
  * @size: the size of the triangle to be printed
  *
  * Description: printing hash as the lines of the triangle
  *
  * Return: nothing
  */
void print_triangle(int size)
{
		int i, j, k;

		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 1 ; i <= size ; i++)
			{
				for (j = i; j <= size-1 ; j++)
				{
					_putchar(' ');
				}
				for(k = 1; k <= i ; k++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
}

