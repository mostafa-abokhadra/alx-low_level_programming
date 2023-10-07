#include "main.h"
#include <stdlib.h>

/**
  * l - string length
  * @str: the string
  *
  * Description: get the size of a str
  * Return: the size
  */
int l(char *str)
{
		int i;

		for (i = 0 ; str[i] != '\0' ; i++)
		{
		}
		return (i);
}

/**
  * string_nconcat - concat 2 strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes to be copied
  *
  * Description: concating 2 strings using malloc
  * Return: the final string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		unsigned int i, j, s1_size, s2_size;
		char *arr;

		if (s1 == NULL)
		{
			*s1 = '\0';
		}
		if (s2 == NULL)
		{
			*s2 = '\0';
		}
		s1_size = l(s1);
		s2_size = l(s2);
		if (n >= s2_size)
		{
			arr = malloc((s1_size + s2_size + 1) * (sizeof(char)));
		}
		else
		{
			arr = malloc((s1_size + n + 1) * sizeof(char));
		}
		if (arr != NULL)
		{
			for (i = 0 ; i <= s1_size ; i++)
			{
				arr[i] = s1[i];
			}
			for (j = 0 ; j <= s2_size && j < n ; j++, i++)
			{
				arr[i] = s2[j];
			}
			arr[i] = '\0';
			return (arr);
		}
		else
		{
			return (NULL);
		}
}

