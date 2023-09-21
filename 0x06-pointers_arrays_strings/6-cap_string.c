#include "main.h"

/**
  * cap_string - convert first letter
  * @s: the string
  *
  * Description: converting using ascii code the first letter to capital
  *
  * Return: the converted string
  */
char *cap_string(char *s)
{
		int i, j;

		char symb[13] = {' ', '    ', '\n', ',', ';', '{', '}', '?', '.', '!', '(', ')', '"'};

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				for (j = 0 ; j < 13 ; j++)
				{
					if (s[i - 1] == symb[j])
					{
						s[i] -= 32;
						break;
					}
				}
			}
		}
		return (s);
}

