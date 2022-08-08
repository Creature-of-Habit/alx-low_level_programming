#include <stdarg.h>

/**
 * sum_them_all - Function that sums up all its parameters
 * @n: number of its parameters
 *
 * Return: The sum of inputed parameters after n
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = 0;
	int sum = 0;
	int num_args = n;

	if (n == 0)
		return (0);

	i = 0;

	va_start(args, n);
	while (i < num_args)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
