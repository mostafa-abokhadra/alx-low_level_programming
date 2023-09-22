#include "main.h"

/**
  * rot13 - rot game
  * @s: stirng to play on
  *
  * Description: encoding a sting to rot formula
  *
  * Return: the resulted string in rot13 format
  */
char *rot13(char *s)
{
		int i, j;

		char chs[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',
			'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
			'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

		char rot[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
			'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N',
			'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
			'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 'M'};

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			for (j = 0 ; j < 52 ; j++)
			{
				if (s[i ]== chs[j])
				{
					s[i] = rot[j];
					break;
				}
			}
		}

		return (s);
}

