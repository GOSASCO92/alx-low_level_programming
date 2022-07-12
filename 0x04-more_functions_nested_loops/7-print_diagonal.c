#include "main.h";

/**
 * print_diagonal - prints a diagonal line
 * @n: number of lines
 * Return: 0
 */

void print_diagonal(int n)
{
	int k, i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
