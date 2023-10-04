#include <stdlib.h>

/**
* str_l - length of the string
* @str: the string
*
* Description: get the size of a string
*
* Return: the size
*/
int str_l(char *str)
{
int i;

if (str == NULL)
{

return (0);
}
for (i = 0 ; str[i] != '\0' ; i++)
{
}
return (i);


}

/**
* str_concat - concat 2 strings
* @s1: first string
* @s2: second string
*
* Description: concating 2 given strings
* Return: pointer to the new string
*/
char *str_concat(char *s1, char *s2)
{
int size = 1, j = 0;

char *n_str = (char *)malloc (size * sizeof(char));

size = str_l(s1) + str_l(s2);



if(n_str != NULL)
{
int i;

if (s1 == NULL)
{

goto fl2;
}

for(i = 0; s1[i] != '\0' ; i++)
{

n_str[i] = s1[i];
}

fl2:

if (s2 == NULL)
{
goto end;

}

for (j = 0 ; s2[j] != '\0' && s2 != NULL ; j++ , i++)
{
n_str[i] = s2[j];
}
end:

n_str[i] = '\0';

}

return (n_str);
}

