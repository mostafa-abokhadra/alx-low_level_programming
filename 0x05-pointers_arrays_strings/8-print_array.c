#include "main.h"
#include <stdio.h>

/**
  * get_length - length of a string
  * @s: the string
  *
  * Description: returning the length of a given string
  *
  * Return: the length
  */
int get_length(char *s)
{
		int i;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
		}

		return (i);
}
/**
  * print_array - print an array
  * @a: the array to be printed
  * @n: the number of array elements
  *
  * Description: printing elements of a given array
  *
  * Return: nothing
  */
void print_array(int *a, int n)
{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			printf("%d", a[i]);
			if (i + 1 != n)
			{
				printf(", ");
			}
		}

		_putchar('\n');
}

