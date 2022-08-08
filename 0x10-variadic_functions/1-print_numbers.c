#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers 
 * @separator: string that separates the numbers
 * @n: number of variable arguments passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num_args = n;
	va_list args;

	if (separator == NULL)
		return;
	va_start(args, n);

	while (i < (num_args - 1))
	{
		printf("%d", va_arg(args, int));
		printf("%s", separator);
		i++;
	}
	printf("%d", va_arg(args, int));
	va_end(args);
	printf("\n");

}
