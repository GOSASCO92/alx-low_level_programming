#include "main.h"
/**
 * puts_half - prints helf of a string
 * @str: sting
 * Return: 0
 */
void puts_half(char *str)
{
	int l = 0;
	int i, d;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
		d = l / 2;
	else
		d = (l + 1) / 2;
	for (i = d; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
