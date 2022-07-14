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
	int j = 0;
	int k = 0;

	for (; dest[k] != '\0'; k++)
		;
	while (src[j] != '\0' && j < n)
	{
		dest[k + j] = src[j];
		j++;
	}
	return (dest);
}
