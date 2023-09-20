#include "main.h"

/**
  * _strcmp - comparing two strings
  * @s1: the first string
  * @s2: the second string
  *
  * Description: checking if two given strings are equivlent
  *
  * Return: 0 if stings are identical
  * greater than zero if the first unmatching characters in the s1 > s2
  * less than zero if s2 > s1
  */
int _strcmp(char *s1, char *s2)
{
		int i, check = 1;

		for (i = 0  ; s1[i] != '\0' && s2[i] != '\0'; i++)
		{
			if (s1[i] == s2[i])
			{
				continue;
			}
			else
			{
				check = 0;
				break;
			}
		}
		if (check)
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
}

