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
		int i, j, k;

		char arr[5][3] = {{'a', 'A', '4'},
			{'e', 'E', '3'},
			{'o', 'O', '0'},
			{'t', 'T', '7'},
			{'l', 'L', '1'}};

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			for (j = 0 ; j < 5 ; j++)
			{
				for (k = 0 ; k < 2 ; k++)
				{
					if (s[i] == arr[j][k])
					{
						s[i] = arr[j][2];
					}
				}
			}
		}

		return (s);
}

