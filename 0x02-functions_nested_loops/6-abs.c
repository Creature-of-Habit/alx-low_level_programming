#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @a: value to be computed
 *
 * Return: absolute value of integer 
 */

int _abs(int a)
{
	unsigned int _a;
	if (a < 0)
	{
		_a = (unsigned int) a;
		return (_a);
	}
	else
	{
		return(a);
	}
}
