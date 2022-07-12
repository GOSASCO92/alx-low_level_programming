#include "main.h"

/**
 * more_numbers - Prints 0 -10 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
