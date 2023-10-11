#include "function_pointers.h"
#include <stdlib.h>
/**
  * print_name - printing a string
  * @name: the name to be printed
  * @f: pointer to function
  *
  * Description: printing a name using function pointer
  *
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
		if (name == NULL)
		{
			return;
		}
		if (f == NULL)
		{
			return;
		}
		f(name);
}

