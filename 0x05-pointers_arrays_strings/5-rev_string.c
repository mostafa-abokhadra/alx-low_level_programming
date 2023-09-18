#include "main.h"

/**
  * rev_string - reversing a string
  * @s: the string to be reversed
  *
  * Description: getting the length, making a new reversed array
  * then insert the reversed array into the original one
  *
  * Return: nothing
  */
void rev_string(char *s)
{
		int i, j, t;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
		}

		t = i;

		char arr[i];

		i--;

		for (j = 0 ; j < t ; j++ , i--)
		{
			arr[j] = s[i];
		}
		for (i = 0 ; i < t ; i++)
		{
			s[i] = arr[i];
		}
}		
