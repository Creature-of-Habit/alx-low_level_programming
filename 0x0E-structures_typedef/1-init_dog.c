#include "dog.h"
#

/**
 * init_dog -function that initialize a variable of type struct dog
 * @d: pointer to struct dog.
 * @name: char pointer that init struct dog element, name.
 * @age: float that init struct dog element, age.
 * @owner:char pointer that init struct dog element, owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*if ( d != NULL)*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
