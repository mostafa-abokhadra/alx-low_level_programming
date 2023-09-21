#include "main.h"

/**
  * leet - leet game
  * @s: the sting to play upon
  *
  * Description: changing some characters with certain symbols
  *
  * Return: the changed string after converting
  */
char *leet(char *s)
{
		char s1[] = "AaEeOoLlTt";
		char s2[] = "4433001177";
		int i, j;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			for (j = 0 ; j < 10 ; j++)
			{
				if (s[i] == s1[j])
				{
					s[i] = s2[j];
				}
			}
		}

		return (s);
}
