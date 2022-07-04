#include <stdio.h>

/**
 * main - prints letter a - z in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphebet = 'a';

	while (alphebet <= 'z')
	{
		putchar(alphebet);
		alphebet++;
	}
	putchar('\n');
	return (0);
}
