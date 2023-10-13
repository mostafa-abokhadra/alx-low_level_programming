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
			t = va_arg(ptr, char *);
			if (t == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", t);
			}
			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(ptr);
}

