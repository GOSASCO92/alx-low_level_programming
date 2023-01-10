#include "main.h"
/**
 *rev_string - reverses a string
 *@s: input string
 *Return: 0
 */
void rev_string(char *s)
{
char c;
int l = 0, i = 0;

while (s[l] != '\0')
l++;
while (i < i--)
{
c = s[i];
s[i++] = s[l];
s[l] = c;
}
}
