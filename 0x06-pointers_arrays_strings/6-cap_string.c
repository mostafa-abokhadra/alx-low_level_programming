#include "main.h"

/**
  * cap_string - convert lower case to upper
  * @s: the string
  *
  * Description: converting using ascii code
  *
  * Return: the converted string
  */
char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
			break;
		}
	}

	for ( ; s[i] != '\0' ; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && s[i - 1] == ' ')
		{
			s[i]-= 32;

		}
	}

	return (s);
}
