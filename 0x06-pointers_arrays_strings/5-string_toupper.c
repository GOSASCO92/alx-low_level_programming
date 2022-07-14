#include "main.h"
/**
 * string_toupper - converts string to uppercase
 * @c: string
 * Return: results
 */
char *string_toupper(char *c)
{
	char *s = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		c++;
	}
	return (s);
}
