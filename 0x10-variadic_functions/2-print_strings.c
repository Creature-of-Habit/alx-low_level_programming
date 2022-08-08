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

	va_start(args, n);

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}

	while (i < num_args)
	{
		char *c = va_arg(args, char *);
		
		if (c == NULL)
			c = "(nil)";
		if (i == (num_args - 1))
		{
			printf("%s", c);
		}
		else
		{
			printf("%s", c);
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");
}
