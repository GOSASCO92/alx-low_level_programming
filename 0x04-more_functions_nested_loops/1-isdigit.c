#include "main.h"

/**
 * _isdigit - checks if an input is digit
 * @c: Value to be checked
 * Return: 0
 */

int _isdigit(int c)
{
	char a = '0';

	for (; a <= '9'; a++)
	{
		if (a == c)
		{
			return (1);
		}

	}

	return (0);
}
