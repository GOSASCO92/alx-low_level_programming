#include "main.h"

/**
 * print_triangle - prints a triangular shape
 * @size: size of a triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int k, l, i;

	if (size > 0)
	{
		
		for (k = 0; k < size; k++)
		{
			i = size - 1;

			for (l = 0; l < i; l++)
			{
				if (l < i)
					_putchar(' ');
				else
					_putchar('#');
			}
			i--
			_putchar('\n');
		}
	}
	_putchar('\n');
}


