#include "main.h"

/**
  * get_length - return the length
  * @s: the string
  *
  * Description: counting characteers in a given string
  *
  * Return: the length
  */
int get_length(char *s)
{
		int i;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
		}

		return (i);
}

/**
  * rev_string - reversing a string
  * @s: the string to be reversed
  *
  * Description: getting the length, making a new reversed array
  * then insert the reversed array into the original one
  *
  * Return: nothing
  */
void rev_string(char *s)
{
		int i = 0, j = 0, state = 1, tt;

		char t;

		i = get_length(s) - 1;

		tt = i;

		while (state)
		{
			t = s[j];
			s[j] = s[i];
			s[i] = t;
			if (tt % 2 == 0)
			{
				if (j + 2 == i)
				{
					state = 0;
				}
			}
			else
			{
				if (i - j == 1)
				{
					state = 0;
				}
			}
		}
		i--;
		j++;
}
