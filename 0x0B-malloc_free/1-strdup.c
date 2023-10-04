#include "main.h"
#include <stdlib.h>
/**
  * l - length
  * @str: string
  *
  * Description: size of an array
  * Return: the length
  */
int l (char *str)
{
	int i;
		if (str == NULL)
		{
			return (0);
		}
for ( i= 1 ; str[i] != '\0' ; i++)
{

}
return i;
}
/**
  * _strdup - copying a stirng in another place
  * @str: the string
  *
  * Description: newly allocated space in memory
  * Return: pointer to newly allocated str, Null if failed
  */
char *_strdup(char *str)
{
char *arr = (char *) malloc ( sizeof(str));

int i;

if (str == NULL)
	return NULL;


if (arr != NULL) 	
{
if (str != NULL )
{
for (i = 0 ; str[i] != '\0'; i++)
{
arr[i] = str[i];
}
arr [i] = '\0';
return (arr);
}
else
{
return (NULL);
}

}
else
{
return (NULL);
}

}



