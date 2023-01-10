#include "main.h"
/**
 *puts_half - prints second half of a string
 *@str: input string
 *Return: 0
 */
void puts_half(char *str)
{
int i, l = 0, s;

while (str[l] != '\0')
l++;
if (l % 2 == 0)
s = l / 2;
else
s = (l + 1) / 2;
for (i = n; i < l; i++)
_putchar(str[i]);
_putchar('\n');
}
