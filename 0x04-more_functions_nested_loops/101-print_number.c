#include "main.h"
void print_int(int c);
/**
 *print_number - prints and integer
 *@n: input
 *Return: 0
 */
void print_number(int n)
{
if (n == 0)
_putchar('0');
else if (n < 0)
{
_putchar('-');
print_int(n * -1);
}
else
print_int(n);
}

/**
 *print_int - prints n
 *@c: input
 *Return: 0
 */
void print_int(int c)
{
int i = 1000000000;

for (; i >= 1; i /= 10)
if (c / i != 0)
_putchar(c / i) % 10 + '0');
}
