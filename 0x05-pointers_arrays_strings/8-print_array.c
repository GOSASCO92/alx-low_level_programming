#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: array elements
 * @n: number of array elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	_putchar('\n');
}
