#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - free a memmory
  * @d: the memmory to be freed
  *
  * Description: deleting a dynamic memmory allocation
  *
  * Return: nothing
  */
void free_dog(dog_t *d)
{
		if (d != NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
}
