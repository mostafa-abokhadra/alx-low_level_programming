#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creation of new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Description: just creating a dog
  *
  * Return: the new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *new_d = (dog_t *)malloc(sizeof(dog_t));

		if (new_d == NULL)
		{
			free(new_d);
			return (NULL);
		}

		new_d->name = name;
		new_d->age = age;
		new_d->owner = owner;
		return (new_d);
}
