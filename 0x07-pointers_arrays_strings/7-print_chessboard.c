#include "main.h"

/**
  * print_chessboard - print chess floor
  * @a: tha 2d array to be printed
  *
  * Description: using 2 for loops to print
  *
  * Return: nothing
  */
void print_chessboard(char (*a)[8])
{
		int i, j;

		for (i = 0 ; i < 8 ; i++)
		{
			for (j = 0 ; j < 8 ; j++)
			{
				_putchar(a[i][j]);
			}
			_putchar('\n');
		}
}

