#include "main.h"
/**
 *print_times_table - print a times table
 *@n: user input
 *Return: 0
 */
void print_times_table(int n)
{
int x, y;

if (n > 0 && n < 15)
{
for (x = 0; x <= n; x++)
{
_putchar('0');
for (y = 1; y <= 15; y++)
prepout(x * y);
_putchar('\n');
}
}
}

/**
 *prepout - formats the output
 *@n: integer
 */
void prepout(int n)
{
if (n <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}
else if (n > 9 && n > 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((n / 100) + '0');
_putchar((n / 10 % 10) + '0');
_putchar(n % 10 + '0');
}
}
