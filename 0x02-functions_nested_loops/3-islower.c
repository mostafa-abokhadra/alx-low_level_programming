#include "main.h"

/**
  * int _islower - checks for lowercase character
  * @c: the character to be checked
  *
  * description : checks if a given char is in lower case or not
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

