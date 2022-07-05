#include <stdio.h>

/**
 * main - Prints all possible numbers of 3 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;


	for (a = '0'; a <= '9'; a++)
	{
		for (b = a; b <= '9'; b++)
		{

			for (c = b; c <= '9'; c++)
			{
				if (b != a || b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (b == '7' && c == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
