#include "function_pointers.h"
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
			return (NULL);
		}
		if (f == NULL)
		{
			return (NULL);
		}
		f(name);
}

