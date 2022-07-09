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
			for (x = 0; x <= 15; x++)
			{
				n *= x;
				if (x != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (n < 10 && x != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((n % 10) + '0');
				}
				else if (n >= 10 && n < 100)
				{
					_putchar(' ');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
				else if (n >= 100 && x != 0 )
				{
					_putchar((n / 100) + '0');
					_putchar((n / 10) % 10 + '0');
					_putchar((n / 10) + '0');
				}
				else
					_putchar((n % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
				
