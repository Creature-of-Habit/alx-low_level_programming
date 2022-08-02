#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable type of type dog
 * @d: pointer to struct dog
 * @name: char pointer to dog name
 * @age: dog age
 * @owner: char pointer to dog owner's name
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ( d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
