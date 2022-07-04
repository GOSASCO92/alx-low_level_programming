#include <stdio.h>

/**
 * main - prints numbers in base 10 to lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char c;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
