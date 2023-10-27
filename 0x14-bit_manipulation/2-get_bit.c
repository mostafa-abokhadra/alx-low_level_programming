#include "main.h"
#include <stdlib.h>

/**
  * get_binary - converting int to binary
  * @n: number
  *
  * Description: conv to int
  * Return: binary num
  */
char *get_binary(unsigned long int n)
{
		unsigned int size = sizeof(n) * 8, i;
		char *bin_str = malloc(sizeof(char) * size + 1);

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
 */
int get_bit(unsigned long int n, unsigned int index)
{
		char *str = get_binary(n);

		if (index >= sizeof(n) * 8)
			return (-1);
		return (str[index] - '0');
}

