#include "main.h"
#include <stdlib.h>

/**
  * _strdup - copying a stirng in another place
  * @str: the string
  *
  * Description: newly allocated space in memory
  * Return: pointer to newly allocated str, Null if failed
  */
char *_strdup(char *str)
{
		char *new_str = (char *)malloc(sizeof(str));

		if (str == NULL)
		{
			return (NULL);
		}
		if(new_str != NULL)
		{
			int i;

			for (i = 0; str[i] != '\0'; i++)
			{
				new_str[i] = str[i];
			}
			new_str[i] = '\0';
			return (new_str);
		}
		else
		{
			return (NULL);
		}
}

