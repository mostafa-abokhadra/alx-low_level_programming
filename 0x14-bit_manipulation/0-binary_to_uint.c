#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  *
  */
int _strlen(const char *b)
{
int i;

for (i = 0 ; b[i] != '\0' ; i++)
{

}

return (i);
}
/**
  *
  *
  *
  *
  *
  */
unsigned int binary_to_uint(const char *b)
{
char *rev;
unsigned int i, j, num = 1;
unsigned int dec = 0;

if (b == NULL)
return (0);
j = _strlen(b);
rev = malloc(sizeof(char) *  j + 1);
for (i = 0 ; b[i] != '\0' ; i++)
rev[i] = b[--j];
rev[i]='\0';
for (i = 0; rev[i] != '\0'; i++)
{
if (rev[i] == '1' || rev[i] == '0')
{
if (i == 0)
dec += (rev[i] - '0') * 1;
else
{
for (j = 1 ; j <= i ; j++)
num *= 2;
dec += (rev[i] - '0') * num;
num = 1;
}
}
else
return(0);
}
return (dec);
}

