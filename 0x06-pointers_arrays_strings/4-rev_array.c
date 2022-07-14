#include "main.h"
/**
 * rev_array - reverses and array
 * @a: array
 * @n: size of the arry
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int r = 0;

	n = n - 1;
	while (i <= n)
	{
		r = a[n];
		a = a[i];
		a[i++] = r;
	}
}
