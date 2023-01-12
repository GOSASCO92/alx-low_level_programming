#include "main.h"
/**
 *_strncat - concantenates two strings
 *@dest: string1
 *@src: string2
 *@n: integer
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int l = 0, i;
char *c = dest, *s = src;

while (*src)
{
l++;
src++;
}
while (*dest)
dest++;
if (n > l)
n = l;
src = s;
for (i = 0; i < n; i++)
*dest++ = *src++;
*dest = '\0';
return (c);
}
