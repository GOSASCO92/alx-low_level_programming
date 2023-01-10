#include "main.h"
/**
 *_atoi - converts string to integer
 *@s: input string
 *Return: 0
 */
int _atoi(char *s)
{
int i = 1;
unsigned int t = 0;
char f = 0;

while (*s)
{
if (*s == '-')
i *= -1;
if (*s >= '0' && *s <= '9')
{
f = 1;
t = t * 10 + *s - '0';
}
else if (f)
break;
s++;
}
if (i < 0)
t = -t;
return (t);
}
