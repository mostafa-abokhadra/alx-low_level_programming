#include<stdio.h>

/**
  * print - return a string
  *
  * Description : print a string of char
  *
  * Return: pointer to a char
  */
char *print()
{
		return "_putchar";
}
/**
  * main - entry point
  *
  * Description: calling print func
  *
  * Return: 0 to end the program
  */
int main()
{
		printf("%s\n", print());
		return (0);
}

