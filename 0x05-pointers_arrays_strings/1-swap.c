#include "main.h"

/**
  * swap_int - swaping the values of two integers
  * @a: first value
  * @b:second value
  *
  * Description: using a temporary variable to swap
  *
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
		int temp = *a;

		*a = *b;
		*b = temp;
}

