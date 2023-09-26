#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - sum of matrix diagnol
  * @a: the matrix
  * @size: the size
  *
  * Description: suming the 2 diagnols of a square matrix
  *
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
		int i, sum1 = 0, sum2 = 0, *ptr = a;

		for (i = 0; i < size; i++, ptr += size)
		{
			sum1 += ptr[i];
		}

		ptr -= size;

		for (i = 0; i < size; i++, ptr -= size)
		{
			sum2 += ptr[i];
		}

		printf("%d, %d\n", sum1, sum2);
}

