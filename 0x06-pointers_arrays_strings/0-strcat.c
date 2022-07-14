#include "main.h"
/**
 * *_strcat - concatenates two strng
 * @dest: string one
 * @src: string two
 * return: results
 */
char *_strcat(char *dest, char *scr)
{
	char s = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (s);
}
