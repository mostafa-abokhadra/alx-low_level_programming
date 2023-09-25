#include "main.h"

/**
  *
  *
  *
  *
  *
  *
  */
unsigned int _strspn(char *s, char *accept)
{
		int i, j;
		unsigned int cou = 0;

		for (i = 0; s[i] != ' '; i++)
		{
			for (j = 0; accept[j] != '\0' ; j++)
			{
				if (accept[j] == s[i])
				{
					cou ++;
				}
			}
		}

		return (cou);
}

