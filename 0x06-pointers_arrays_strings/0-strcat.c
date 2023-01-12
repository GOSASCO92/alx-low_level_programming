#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: string1
 *@src: string2
 *Return: concantenated string
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j;

for (j = 0; dest[j] != '\0'; j++)
;
while (src != '\0')
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
