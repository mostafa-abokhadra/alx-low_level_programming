#include "main.h"
#include <stdlib.h>

/**
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
char *rev_str (char *str)
{
int j = _strlen(str), i;
char *str2 = malloc(sizeof(char) * j + 1);
for (i = 0; str[i] != '\0'; i++)
{
str2[i] = str[--j];
}
str2[i]='\0';
return (str2);
}
char *conv_to_binary(unsigned long int *n)
{
char *conv = malloc(sizeof(char) * 32 + 1);
int i = 0, re = 1;

if (*n == 0 || *n == 1)
{
conv[i++] = *n +  '0';
}
else
{
for (i = 0 ; *n ; i++)
{
conv = realloc(conv, sizeof(char) * (++re));
conv[i] = (*n % 2 + '0');
*n /= 2;
}
}
conv[i] = '\0';
return (rev_str(conv));
}
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
int set_bit(unsigned long int *n, unsigned int index)
{
char *str_bin = conv_to_binary(n);
unsigned int size = _strlen(str_bin);

if (index >= size)
return (-1);
else
{
str_bin[index] = '1';
*n = binary_to_uint(str_bin);
return (1);
}

}

