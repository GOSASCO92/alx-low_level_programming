#include "main.h"
/**
 * print_rev - prints a reversed string
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	char *length = s;

	while (*length)
		length++;
	length = length - 1;

	while (length)
	{
		_putchar(*s);
		length--
	}
	_putchar('\n');
}
