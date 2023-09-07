#include<stdio.h>

/**
  * main - entry point
  * 
  * Description: print the size of permitive data types in c languagh
  * Return: 0 to end the program 
  *
  */
int main(void)
{
	printf("Size of a char: %d byte(s)\n"
		"Size of an int: %d byte(s)\n"
		"Size of a long int: %d byte(s)\n"
		"Size of a long long int: %d byte(s)\n"
		"Size of a float: %d byte(s)\n",
		sizeof(char),sizeof(int),sizeof(long int),sizeof(long long int),sizeof(float));
	return (0);
}

