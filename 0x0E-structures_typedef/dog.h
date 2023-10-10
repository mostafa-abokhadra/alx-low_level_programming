#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - new type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: making new type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
