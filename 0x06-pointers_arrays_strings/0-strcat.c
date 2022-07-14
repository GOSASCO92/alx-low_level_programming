#include "main.h"
/**
 * _strcat - concatenates a string
 * @dest: string destination
 * @src: string source
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (s);
}
