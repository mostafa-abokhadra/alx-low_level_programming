#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: the string to search on
  * @accept: the string to search upon
  *
  * Description: locates the first occurrence in the string
  *
  * Return : pointer to first occurrence, or NULL if not found
  */
char *_strpbrk(char *s, char *accept)
{
		int i, j;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			for (j = 0 ; accept[j] != '\0' ; j++)
			{
				if (s[i] == accept[j])
				{
					return (&s[i]);
				}

			}
		}

		return (0);
}
