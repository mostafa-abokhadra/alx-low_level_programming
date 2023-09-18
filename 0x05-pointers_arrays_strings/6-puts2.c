#include "main.h"

/**
  * get_length - sting length
  * @s: the string
  *
  * Description: returning the length of a given string
  *
  * Return: the length
  */
int get_length(char *s)
{
		int i;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
		}

		return (i);
}

/**
  * puts2 - print an odd string !
  * @str: the given string
  *
  * Description: printing every other character in a given string
  *
  * Return: nothing
  */
void puts2(char *str)
{
		int i;

		for (i = 0 ; str[i] != '\0' && (i < get_length(str)) ; i += 2)
		{
			_putchar(str[i]);
		}
}
