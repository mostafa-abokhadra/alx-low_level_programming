#include "main.h"

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
