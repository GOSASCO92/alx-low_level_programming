#include "main.h"
/**
 *print_line - print line n number of times
 *@n: number of lines
 *Return: 0
 */
void print_line(int n)
{
int i;

for (i = 0; i <= n; i++)
{
if (n <= 0)
_putchar('\n');
else
_putchar('-');
}
_putchar('\n');
}
