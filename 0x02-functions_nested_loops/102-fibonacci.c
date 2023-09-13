#include<stdio.h>
#include "main.h"

/**
  * main - entry point
  *
  * Description: fibonacci 50  nums
  *
  * Return: nothing
  */
int main(void)
{
		unsigned long int arr [50];
		int i;

		arr[0] = 1, arr[1] = 2;
		for (i = 2 ; i < 50 ; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		for (i = 0 ; i < 50 ; i++)
		{
			printf("%lu, ", arr[i]);
		}
		printf("\n");
}
