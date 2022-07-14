#include "main.h"
/**
 * _strncpy -copies a string
 * @dest: destination
 * @src: source
 * @n: size of string
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
