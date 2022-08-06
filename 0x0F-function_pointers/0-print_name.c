#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: char pointer to name to be printed.
 * @f: function pointer to the function that prints.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f(name) == NULL)
		return;
	f(name);
}
