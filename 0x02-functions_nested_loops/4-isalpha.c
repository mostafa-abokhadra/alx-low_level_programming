#include "main.h"

/**
  * _isalpha - checks if a given char is alphabet
  * @c: the character to be checked
  *
  * Description: using ascii code see if a given char
  * is alphbet
  *
  * Return: 1 if alphabet , 0 if not
  */
int _isalpha(int c)
{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
			return (1);
			
		return (0);
}

