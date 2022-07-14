#include "main.h"
/**
 * rot13 - encodes a string
 * @c: points to a string
 * Return: string
 */

char *rot13(char *c)
{
	int i = 0;
	int j = 0;
	char k[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (; c[i] != '\0'; i++)
	{
		boolean = 0;
		for (; a[j] != '\0' && boolean == 0; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = k[j];
				boolean = 1;
			}
		}
	}
	return (c);
}
