#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	int num_args = n;
	va_list args;

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	while (i++ < (num_args - 1))
	{
		printf("%s", va_arg(args, char *));
		printf("%s", separator);
	}
	printf("%s", va_arg(args, char *));
	printf("\n");
}
