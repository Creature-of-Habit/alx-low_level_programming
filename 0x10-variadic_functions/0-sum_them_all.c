#include <stdarg.h>

/**
 * sum_them_all - Function that sums up all its parameters
 * @n: number of its parameters
 *
 * Return: The sum of inputed parameters after n
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0;

	if (n == 0)
		return (0);

	i = 0;
	va_list args;
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
