#include "main.h"

/**
 * print_to_98 - prints number n to 98
 * @n: initial number
 * Return: nothing
 */

void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
