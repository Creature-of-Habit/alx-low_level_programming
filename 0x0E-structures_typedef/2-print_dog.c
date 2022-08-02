#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: Pointer to a struct dog type
 * 
 */

void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)

	if (d->name == NULL)
		printf("Name: %s\n", nil);
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: %s\n", nil);
	else
		printf("Owner: %s\n", d->owner);

}
