#include "main.h"
/**
 *print_to_98 - prints natural numbers
 *@n: starting position
 *Return: 0
 */
void print_to_98(int n)
{
int i;

for (i = n; i <= 98; i++)
{
if (n >= 0 && n < 98)
{
_putchar(i);
_putchar(',');
_putchar(' ');
}
}
}
