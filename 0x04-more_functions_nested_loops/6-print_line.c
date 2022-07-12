#include "main.h"

/**
 * print_line - Prints lines base on the value of n
 * @n: determines how many lines to be printed
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	if (n < 0)
		_putchar('\n');
	for (; i <= n; i++)
		_putchar('_');
}
