#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: elements of the array
 * @size: bytes of the elements
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mryspc;
	unsigned int a_sz, i = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	a_sz = nmemb * size;
	mryspc = malloc(a_sz);

	if (mryspc == NULL)
		return (NULL);

	while (i < a_sz)
	{
		mryspc[i] = 0;
		i++;
	}

	return (mryspc);
}
