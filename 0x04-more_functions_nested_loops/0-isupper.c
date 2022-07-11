#include "main.h"

/**
 * _isupper - checks the case of a character
 * @c: character to be checked
 * Return: 0
 */

int _isupper(int c)
{
	char upper = 'A';

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			return (1);
		}
	}
	return (0);
}
