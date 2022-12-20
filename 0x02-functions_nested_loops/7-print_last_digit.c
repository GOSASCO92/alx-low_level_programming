#include "main.h"
/**
 *print_last_digit - gets last digit of a number
 *@n: user input
 *Return: 0
 */
int print_last_digit(int n)
{
int l;

if (n < 0)
l = -1 * (n % 10);
else
l = n % 10;
_putchar((l % 10) + '0');
return (l % 10);
}
