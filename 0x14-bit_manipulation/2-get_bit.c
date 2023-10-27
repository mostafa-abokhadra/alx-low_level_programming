#include "main.h"
#include <stdlib.h>

/**
  * _strlen - length
  * @b: string
  *
  * Description: length of string
  * Return: the length
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
  * rev_str - rev a str
  * @str: the string
  *
  * Description: reversing string
  * Return: reversed string
  */
char *rev_str(char *str)
{
		int j = _strlen(str), i;
		char *str2 = malloc(sizeof(char) * j + 1);

		for (i = 0; str[i] != '\0'; i++)
		{
			str2[i] = str[--j];
		}
		str2[i] = '\0';
		return (str2);
}

/**
  * conv_to_binary - converting to binary
  * @n: the number
  *
  * Description: conv to bin
  * Return: converted num
  */
char *conv_to_binary(unsigned long int n)
{
		char *conv = malloc(sizeof(char) * 2);
		int i = 0, re = 1;

		if (n == 0 || n == 1)
		{
			conv[i++] = n +  '0';
		}
		else
		{
			for (i = 0 ; n ; i++)
			{
				conv = realloc(conv, sizeof(char) * (++re));
				conv[i] = (n % 2 + '0');
				n /= 2;
			}
		}
		conv[i] = '\0';
		return (rev_str(conv));
}

/**
  * get_bit - gitting bit
  * @n: number
  * @index: index
  *
  * Description: getting bit in an index
  * Return: 1 if success, -1 if not
  */
int get_bit(unsigned long int n, unsigned int index)
{
		char *str_bin = conv_to_binary(n);
		unsigned int size = _strlen(str_bin);

		if (index >= size)
			return (-1);
		else
			return (str_bin[index] - '0');
}

