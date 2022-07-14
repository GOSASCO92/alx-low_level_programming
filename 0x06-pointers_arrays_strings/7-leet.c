#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: string
 * Return: string
 */

char *leet(char *c)
{
	int i = 0;
	int j = 0;
	char base[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char s[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (c[i])
	{
		for (; j < 10; j++)
			if (c[i] == s[j])
				c[i] = base[j];
		i++;
	}
	return (c);
}
