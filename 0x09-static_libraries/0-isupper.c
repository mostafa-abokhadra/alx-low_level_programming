#include "main.h"

/**
  * _isupper - checking upper case letter
  * @c: the letter to be checked
  *
  * Description: using ascii code to look for upper case letter
  *
  * Return: 1 if the letter is in upper case , 0 if otherwise
  */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
