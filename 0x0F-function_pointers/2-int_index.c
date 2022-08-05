#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: Given Array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare the values
 *
 * Return: index of the first element with matches the search
 * Otherwise return -1.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(arr[i]) != 0)
			return (i);
	}
	return (-1);

}
