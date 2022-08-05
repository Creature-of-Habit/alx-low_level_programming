#include <stdlib.h>

/**
 * array_iterator - Function that executes given parameter on array elements
 * @array: given array of int elements
 * @size: size of the given array
 * @action: function to be executed on each element
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
