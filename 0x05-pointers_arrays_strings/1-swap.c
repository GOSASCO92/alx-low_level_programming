#include "main.h"
/**
 * swap_int - swaps the value of two integer
 * @a: integer one
 * @b: integer two
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
