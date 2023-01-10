#include "main.h"
/**
 *_strcpy - copies a string pointed to by src
 *@dest: string destination
 *@src: string src
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
char *s = dest;

while (*src)
*dest++ = *src++;
return (s);
}
