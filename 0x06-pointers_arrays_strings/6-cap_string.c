#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: a string
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int i = 1;
	int j = 0;
	char s[] = " \t\n,;.!?\"(){}";

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= ('a' - 'A');
	while (c[i] != '\0')
	{
		for (; s[j] != '\0'; j++)
			if (c[i - 1] == s[j] && (c[i] >= 'a' && c[i] <= 'z'))
				c[i] -= ('a' - 'A');
		i++;
	}
	return (c);
}
