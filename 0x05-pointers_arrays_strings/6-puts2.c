#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	l = l - 1;
	for (int i = 0; i <= l; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}

