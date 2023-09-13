#include <stdio.h>
#include "main.h"

/**
  * sum_of_multiples - prints only multiples
  *
  * Decription: sum of multiples of 3 and 5
  *
  * Return: nothing
  */
void sum_of_multiples()
{
		int counter = 0, i;
		for (i =1 ; i <= 1024 ; i++)
		{
			if(i % 3 == 0 || i % 5 == 0)
			{
				counter+=i;
			}
		}
		printf("%d\n",counter);
}
/**
  * main - entry point
  *
  * Description : calling the excution function
  *
  * Return: always 0
  */
int main(void)
{
		sum_of_multiples();
		return (0);
}

