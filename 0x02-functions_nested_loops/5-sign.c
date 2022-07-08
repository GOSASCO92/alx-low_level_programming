#include "main.h"

/**
 * print_sigin - prints the sign of a number
 *
 * @n: number to check
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	
		_putchar('\n');
	
	
}
