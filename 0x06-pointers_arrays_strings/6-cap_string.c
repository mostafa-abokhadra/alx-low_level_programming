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
		int i;

		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
		for (i = 1 ; s[i] != '\0' ; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (s[i - 1] == ' ' || s[i - 1] == '\t' ||
						s[i - 1] == '.' || s[i - 1] == ',' ||
						s[i - 1] == ';' || s[i - 1] == '\n' ||
						s[i - 1] == '"' || s[i - 1] == '{' ||
						s[i - 1] == '}' || s[i - 1] == '(' ||
						s[i - 1] == ')' || s[i - 1] == '!' ||
						s[i - 1] == '?')
				{
					s[i] -= 32;
				}
			}
		}

		return (s);
}
