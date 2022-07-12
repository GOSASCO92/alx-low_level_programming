#include "main.h";

/**
 * print_diagonal - prints a diagonal line
 * @n: number of lines
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	for (; i < n; i++)
		_putchar('\\');
	_putchar('\n');
}
