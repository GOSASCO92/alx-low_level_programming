#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: size
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0;
	int b = 0;
	int c = 0;

	if ((n1[0] - '0') + (n2[0] - '0') >= 10)
	{
		r[0] = 1 + '0';
		b = 1;
	}
	while (a < size_r && (n1[a] != '\0' || n2[b] != '\0' || r[b] != '\0'))
	{
		if ((n1[i + 1] - '0') + (n2[i + 1] - '0') >= 10)
			c = 1;
		else
			c = 0;
		r[b] = (n1[a] - '0') + (n2[a] - '0') + c;
		r[b] = r[b] % 10 + '0';
		printf("a: %d, n1: %d, n2: %d, b: %d, r: %d\n", a, n1[a] - '0', n2[a] - '0', b, r[b] - '0');
		a++;
		b++;
		if (n1[a] == '\0' || n2[a] == '\0')
			r[b] = '\0';
	}
	r[b] = '\0';
	return (r);
}
