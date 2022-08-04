#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: Given array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches or if size is 0 or less;
 * index of the first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		else 
			return (-1);
		i++;
	}
}
