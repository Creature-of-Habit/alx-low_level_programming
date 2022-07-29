#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: amount of memory to b ereserved
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mryspc;

	mryspc = malloc(b);

	if (mryspc == NULL)
		exit(98);

	return (mryspc);
}
