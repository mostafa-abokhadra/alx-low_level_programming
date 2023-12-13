#include "main.h"

/**
  * _strchr - find a char
  * @s: the string
  * @c: the char to find
  *
  * Description: finding a character in a given string
  *
  * Return: pointer to char if found, NULL if not
  */
char *_strchr(char *s, char c)
{
		int i;

		for (i = 0; s[i] >= '\0'; i++)
		{
			if (s[i] == c)
			{
				return (&s[i]);
			}
		}

		return (0);
}

