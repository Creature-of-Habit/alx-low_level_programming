#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @a: value to be computed
 *
 * Return: absolute value of integer 
 */

int _abs(int a)
{
	int result;
	
	if (a < 0)
	{
		result = a * -1;
	}
	else
	{
		result = a;
	}
	
	return (result);
}
