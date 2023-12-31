#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializing a dog type
  * @d: the struct variable
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Description: assigning values to struct variable
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			free(d);
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
