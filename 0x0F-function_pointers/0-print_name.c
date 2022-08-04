#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name.
 * @name: name to be printed
 * @f: function pointer that prints the name.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		_putchar('\n');

	f(name);
}
