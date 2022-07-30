#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: elements of the array
 * @size: bytes of the elements
 *
 * Renturn: pointer to the allocated mmemory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mryspc;
	unsigned int a_sz, i = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	a_sz = nmemb * size;
	mryspc = malloc(a_sz);

	while (i < nmemb)
	{
		mryspc[i] = 0;
		i++;
	}

	return (mryspc);
}
