#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char c;

	while (s[l] != '\0')
		l++;
	while (i < l--)
	{
		c = s[i];
		s[i++] = s[l];
		s[l] = c;
	}
}
