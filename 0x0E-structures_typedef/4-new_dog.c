#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - returning the lenghe of a string
  * @s: the stirng which length need to be calculated
  *
  * Description: using a counter to calculate each character of the string
  *
  * Return: the length of the string
  */

int _strlen(char *s)
{
		int length = 0, i;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			length++;
		}

		return (length);
}

/**
  * _strcpy - copying a string
  * @dest: the destination to be copied at
  * @src: the source of copying
  *
  * Description: copying a given string into another string
  *
  * Return: the destination string
  */
char *_strcpy(char *dest, char *src)
{
		int i;

		for (i = 0 ; src[i] != '\0' ; i++)
		{
			dest[i] = src[i];
		}

		dest[i] = '\0';

		return (dest);
}

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
		dog_t *new_d;
		int name_size = 0, owner_size = 0;

		if (name != NULL && owner != NULL)
		{
			name_size = _strlen(name) + 1;
			owner_size = _strlen(owner) + 1;
			new_d = malloc(sizeof(dog_t));

			if (new_d == NULL)
			{
				return (NULL);
			}

			new_d->name = malloc(sizeof(char) * name_size);

			if (new_d->name == NULL)
			{
				free(new_d);
				return (NULL);
			}

			new_d->owner = malloc(sizeof(char) * owner_size);

			if (new_d->owner == NULL)
			{
				free(new_d->name);
				free(new_d);
				return (NULL);
			}

			new_d->name = _strcpy(new_d->name, name);
			new_d->owner = _strcpy(new_d->owner, owner);
			new_d->age = age;
		}

		return (new_d);
}
