#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Starts a variable of type struct dog
 * @d: the dog to be started
 * @name: dog's name
 * @owner: dog owner
 * @age: dog age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

