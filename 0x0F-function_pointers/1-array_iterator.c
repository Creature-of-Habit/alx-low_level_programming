#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter on each element of an array.
 * @array: Given array
 * @size: Size of the array
 * @action: Pointer to the function to be used.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
