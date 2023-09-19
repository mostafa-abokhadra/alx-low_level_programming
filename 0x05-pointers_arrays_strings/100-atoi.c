#include "main.h"

/**
  * _atoi - converting a string to integer
  * @s: the string to be converted
  *
  * Description: using ascii code to convert
  *
  * Return: the converted string of int type
  */
int _atoi(char *s)
{
		int neg = 0, i, n = 0;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				n *= 10;
				if( s[i - 1] == '-')
				{
					neg = 1;
				}
				n += (s[i] - '0');

				if (! (s[i + 1] >= '0' && s[i + 1] <= '9'))
				{
					break;
				}
			}
		}
		if (neg)
		{
			n *= (-1);
		}

		return (n);
}

