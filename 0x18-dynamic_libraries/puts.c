#include "main.h"
/**
  * _puts - print a string
  * @str: the given string to be printed
  *
  * Description: using putchar and loop to print characters
  *
  * Return:nothing
  */
void _puts(char *str)
{
                int i;

                for (i = 0 ; str[i] != '\0' ; i++)
                {
                        _putchar(str[i]);
                }
                _putchar('\n');
}
