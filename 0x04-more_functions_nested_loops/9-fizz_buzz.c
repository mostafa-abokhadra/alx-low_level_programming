#include <stdio.h>
#include "main.h"

/**
  * main - printing from 1 to 100
  *
  * Description: if no remainder on division to 3 we priint fizz
  * if on division on 5 we print buzz
  * if on diviion on bothe we print fizzbuzz
  *
  * Return: nothing
  */
int main(void)
{
		int i;

		for (i = 1 ; i <= 100 ; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (i % 5 == 0)
			{
				if (i == 100)
				{
					printf("Buzz");
				}
				else
				{
					printf("Buzz ");
				}
			}
			else
			{
				printf("%d ", i);
			}
		}
		_putchar('\n');

		return (0);
}

