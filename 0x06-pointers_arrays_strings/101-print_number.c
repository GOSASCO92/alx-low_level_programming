#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: number
 */
void print_number(int n)
{
	int i, j, k = 1;

	if (n >= 0)
		i = n * -1;
	else
	{
		i = n;
		_putchar('-');
	}
	j = i;
	while (j <= -10)
	{
		k *= 10;
		j /= 10;
	}
	while (k >= 1)
	{
		_putchar(((i / k) % 10) * -1 + '0');
		k /= 10;
	}
}
