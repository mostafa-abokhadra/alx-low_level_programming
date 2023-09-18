#include "main.h"

/**
  * _strlen - returning the lenghe of a string
  * @s: the stirng which length need to be calculated
  *
  * Description: using a counter to calculate each character of the string
  *
  * Return: the length of the string
  */

int _strlen(char *s)
{
		int length = 0, i;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			length++;
		}

		return length;
}

