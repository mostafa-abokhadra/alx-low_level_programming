#include "main.h"

/**
  * int _islower - checks for lowercase character
  * @c: the character to be checked
  *
  * description: return 1 if a given char,
  * in the ascii code is from 97 to 122
  *
  * Return: 1 if lower case, 0 otherwise
  */
int _islower(int c)
{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		return (0);
}

