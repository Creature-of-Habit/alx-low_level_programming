#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers.
 * @min: Minimum value of the array.
 * @max: Maximum value of the array.
 *
 * Return: Pointer to the integer array created.
 */

int *array_range(int min, int max)
{
	int *mryspc;
      	int size, i = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	mryspc = malloc(sizeof(*mryspc) * size);
	
	if (mryspc == NULL)
		return (NULL);
	while ( min <= max)
	{
		mryspc[i++] = min++;
	}

	return (mryspc);
}
