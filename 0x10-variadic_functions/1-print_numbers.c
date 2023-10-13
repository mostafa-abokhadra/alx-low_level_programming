#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - printing nums
  * @separator: between nums
  * @n: number of args
  *
  * Description: print varaible length args
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
		va_list ptr;

		va_start(ptr, n);
		for (i = 0 ; i < n ; i++)
		{
			if (i != n - 1)
			{
				if (separator != NULL)
				{
					printf("%d%s", va_arg(ptr, int), separator);
				}
				else
				{
					printf("%d", va_arg(ptr, int));
				}
			}
			else
			{
				printf("%d\n", va_arg(ptr, int));
			}
		}

		va_end(ptr);
}

