#include "main.h"

/**
 * print_square - prints a square
 * @size: size of a square
 * Return: 0
 */


void print_square(int size)
{
	int k, i;

	if (size > 0)
	{
		for (k = 0; k < size; k++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
