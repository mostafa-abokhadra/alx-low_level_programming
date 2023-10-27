#include "main.h"
#include <stdlib.h>
/**
  *
  *
  *
  *
  *
  */
int _strlen(const char *str)
{
unsigned int i;

for (i = 0; str[i] != '\0'; i++)
{
}
return (i);
}

/**
  *
  *
  *
  *
  */
char *get_binary(unsigned long int n)
{
    char *bin_str = malloc(sizeof(char) * 33);
    unsigned int i;

    for (i = 0; n; i++)
    {
        bin_str[i] = ((n % 2) + '0');
        n /= 2;
    }
    bin_str[i] = '\0';
    return (bin_str);
}
/**
 * get_bit - gets the bit at the index
 * @n: the number to index
 * @index: the bit to get
 *
 * Return: the bit state or -1 on error
 *
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
*/
int get_bit(unsigned long int n, unsigned int index)
{
char *str = get_binary(n);
unsigned int length = _strlen(str);
if(index < length)
return (str[index] - '0');
else
return (-1);
}

