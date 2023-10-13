#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_last - printing only last string
  * @str: the last string
  *
  * Description: to not print the separator after
  *
  * Return: nothing
  */
void print_last(char *str)
{
		if (str != NULL)
		{
			printf("%s\n", str);
		}
		else
		{
			printf("(nil)\n");
		}
}

/**
  * print_strings - printing a list of strings
  * @separator: between strings
  * @n: number of strings
  *
  * Description: using variadic functions to print
  *
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
		va_list ptr;
		char *t;

		va_start(ptr, n);
		for (i = 0 ; i < n ; i++)
		{
			if (i == n - 1)
			{
				t = va_arg(ptr, char *);
				print_last(t);
				break;
			}
			t = va_arg(ptr, char *);
			if (separator != NULL)
			{
				if (t != NULL)
				{
					printf("%s%s", t, separator);
				}
				else
				{
					printf("(nil)%s", separator);
				}
			}
			else
			{
				if (t != NULL)
				{
					printf("%s", t);
				}
				else
				{
					printf("(nil)");
				}
			}
		}
		va_end(ptr);
}

