#incluude "main.h"

/**
 * _isdigit - checks if input is a digit between 0 and 9
 * @c: value to be checked.
 *
 * Return: 1 if value is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	int result, i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
