#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = 0;
	int j = 0;
	char *s = dest;
	char b = src;

	while (*src)
	{
		k++;
		src++
	}
	while (*dest)
		dest++;
	if (n > j)
		n = j;
	src = b;
	for (; k < n; k++)
		*dest++ = *src++;
	*dest = '\0';
	return (s);
}
