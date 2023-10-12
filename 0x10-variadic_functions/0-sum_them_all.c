#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - printing the sum of integers
  * @n: number of args
  *
  * Description: sum of varible length args
  *
  * Return: the sum
  */
int sum_them_all(const unsigned int n, ...)
{
		va_list ptr;
		int i, sum = 0;

		if (n <= 0)
		{
			return (0);
		}
		va_start(ptr, n);
		for (i = 0 ; i < n ; i++)
		{
			sum += va_arg(ptr, int);
		}
		va_end(ptr);
		return (sum);
}

