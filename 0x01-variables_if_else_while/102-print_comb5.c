#include <stdio.h>

/**
 * main - prints possible combinations of two two numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; a <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar('\n');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 98 || b == 99)
				continue;
			putchar(',');
			putchar(' ');
			
		}
	}

	putchar('\n');

	return (0);
}
