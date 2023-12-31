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
		int pos = 1, i, n = 0, min = 0;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			if (s[i] == '-' || s[i] == '+')
			{
				if (pos == 1 && s[i] == '-')
				{
					pos = 0;
				}
				else if (pos == 0 && s[i] == '-')
				{
					pos = 1;
				}
			}
			if (s[i] >= '0' && s[i] <= '9')
			{
				n *= 10;
				if (n == 2147483640 && s[i] == '8')
				{
					min = 1;
					break;
				}
				n += (s[i] - '0');
				if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				{
					break;
				}
			}
		}
		if (!pos)
		{
			n *= (-1);
			if (min)
			{
				n -= 8;
			}
		}

		return (n);
}
