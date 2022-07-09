#include "main.h"

/**
 * print_times_table - prints  times table
 * @n: number to print
 */

void print_times_table(int n)
{
	int i, x;

	if (!(n > 15 || n == 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (x = 1; x <= 15; x++)
			{
				if (n <= 9)
				{
					_putchar(i * x);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(n + '0');
				}
				else if (n > 9 && n <= 99)
				{
					_putchar(i * x);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
				else
				{
					_putchar(i * x);
					_putchar(',');
					_putchar(' ');
					_putchar((n / 10) + '0');
					_putchar((n / 10 % 10) + '0');
					_putchar((n % 10) + '0');
				}
				_putchar('\n');
			}
		}
	}
}
