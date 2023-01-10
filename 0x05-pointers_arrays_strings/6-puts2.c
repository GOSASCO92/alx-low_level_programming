#include "main.h"
/**
 *puts2 - prints every other character of a string
 *@str: input string
 *Return: 0
 */
void puts2(char *str)
{
int i, l = 0;

while (str[l] != '\0')
l++;
l -= 1;
for (i = 0; i <= l; i += 2)
_putchar(str[i]);
_putchar('\n');
}
