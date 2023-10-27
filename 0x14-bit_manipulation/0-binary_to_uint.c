#include "main.h"
#include <stdlib.h>

/**
  * _pow - power of num
  * @pow: power of the num
  *
  * Description: calc pow of num
  * Return: the result
  */
int _pow(int pow)
{
		int i, res = 1;

		if (pow == 0)
			return (1);
		for (i = 0; i < pow ; i++)
			res *= 2;
		return (res);
}

/**
  * _strlen - str length
  * @b: the string
  *
  * Description: length of a str
  * Return: length
  */
int _strlen(const char *b)
{
		int i;

		for (i = 0 ; b[i] != '\0' ; i++)
		{
		}
		return (i);
}
/**
  * rev_str - reversing the binary number
  * @str: the number
  *
  * Description: reversing it to get it from right
  * Return: the reversed
  */
char *rev_str(const char *str)
{
		int i, j;
		char *rev_string;

		j = _strlen(str);
		rev_string = malloc(sizeof(char) * j + 1);
		for (i = 0; str[i] != '\0' ; i++)
		{
			rev_string[i] = str[--j];
		}
		rev_string[i] = '\0';
		return (rev_string);
}

/**
  * binary_to_uint - convert to int
  * @b: binary num
  *
  * Description: converting to a decimal
  * Return: converted num
  */
unsigned int binary_to_uint(const char *b)
{
		unsigned int num = 0, i;
		char *reversed;

		if (!b)
			return (0);
		reversed = rev_str(b);
		for (i = 0; reversed[i] != '\0'; i++)
		{
			if (reversed[i] != '1' && reversed[i] != '0')
				return (0);
			num += (reversed[i] - '0') * _pow(i);
		}
		return (num);
}

