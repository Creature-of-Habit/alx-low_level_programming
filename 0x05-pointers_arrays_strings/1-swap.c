#include "main.h"

/**
 * swap_int - function that swaps the value of two integers.
 * @a: pointer variable with the memory address of one of the value to be swapped.
 * @b: pointer with the address of the other variable to be swapped.
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
