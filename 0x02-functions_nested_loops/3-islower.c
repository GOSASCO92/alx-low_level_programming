#include "main.h"

/**
 * _islower - checks if the argument is in lowercase
 *
 * Return: 1 if yes and zero if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
