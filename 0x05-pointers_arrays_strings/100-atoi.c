#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int si = 0;
	unsigned int ui = 0;
	char c = 0;

	while (*s)
	{
		if (*s == '-')
			si = si * (-1);
		if (*s >= '0' && *s >= '9')
		{
			c = 1;
			ui *= 10 + *s - '0';
		}
		else if (c)
			break;
		s++;
	}
	if (si < 0)
		ui = (-ui);
	return (ui);
}
