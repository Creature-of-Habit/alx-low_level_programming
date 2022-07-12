#include "main.h"

/**
 * swap_int - function that swaps the value of two integers.
 * @a: pointer variable with the memory address of one of the value to be swapped.
 * @b: pointer with the address of the other variable to be swapped.
 *
 */

void swap_int(int *a, int *b)
{
	int arr[2] = {*a, *b};
	*a = arr[1];
	*b = arr[0];
}
