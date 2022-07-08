#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: last digit
 * Return: the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = (n % 10) * -1;
	else
		n = n % 10;


	_putchar((n % 10) + '0');
	
	
	return (n % 10);
}
