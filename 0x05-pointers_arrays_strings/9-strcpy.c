#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: result
 */
char *_strcpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0'; && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
