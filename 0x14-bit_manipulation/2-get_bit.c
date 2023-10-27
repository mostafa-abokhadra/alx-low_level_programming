#include "main.h"

/**
  * get_bit - getting bit
  * @n: number
  * @index: idx
  *
  * Description: right sifting and and
  * Return: result
  */
int get_bit(unsigned long int n, unsigned int index)
{
        if (index >= sizeof(n) * 8)
                return (-1);

        return (n >> index & 1);
}


