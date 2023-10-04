#include "main.h"
#include <stdlib.h>

/**
  * l - length
  * @str: string
  *
  * Description: length of a string
  *
  * Return: the length
  */
int l(char *str)
{
		int i;

		if (str == NULL)
		{
			return (0);
		}
		for (i = 1; str[i] != '\0' ; i++)
		{
		}

		return (i);
}

/**
  * str_concat - concate 2 strings
  * @s1: first string
  * @s2: second string
  *
  * Description: concating 2 given strings
  *
  * Return: the final concating string
  */
char *str_concat(char *s1, char *s2)
{
		int i, j = 0;
		char *arr = (char *)malloc(l(s1) + l(s2) * sizeof(char) + 1);

		if(s1 == NULL)
		{
			s1 = (char *)malloc(sizeof(char));
			*s1 = '\0';
		}
		if(s2 == NULL)
		{
			s2 = (char *)malloc(sizeof(char));
			*s2 = '\0';
		}

		if(arr != NULL)
		{
			for (i = 0 ; s1[i] != '\0' ; i++)
			{
				arr[i] = s1[i];
			}
			for (; s2[j] != '\0'; j++, i++)
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

