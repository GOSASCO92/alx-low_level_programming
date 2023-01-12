#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: string1
 *@src: string2
 *Return: concantenated string
 */
char *_strcat(char *dest, char *src)
{
char *c = dest;

while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = '\0';
return (c);
}
