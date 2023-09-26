#include "main.h"

/**
  * compare - comparing 2 strings
  * @s1: the first
  * @s2: the second
  *
  * Description: any thing
  * Return: 1 on success, 0 if not
  */
int compare(char *s1, char *s2)
{
		while (*s1 && *s2)
		{
			if (*s1 != *s2)
			{
				return (0);
			}

			s1++;
			s2++;
		}

		return (*s2 == '\0');
}

/**
  * _strstr - finding substr
  * @haystack: the string
  * @needle: the substr
  *
  * Description: anything
  *
  * Return: the substr if found, 0 if not
  */
char *_strstr(char *haystack, char *needle)
{
		while (*haystack != '\0')
		{
			if ((*haystack == *needle) && compare(haystack, needle))
			{
				return (haystack);
			}
			haystack++;
		}

		return (0);
}
