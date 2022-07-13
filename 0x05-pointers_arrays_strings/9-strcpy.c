#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: result
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src)
		*dest++ = *src++;
	return (d);
}
