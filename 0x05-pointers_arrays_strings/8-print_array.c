#include "main.h"
/**
 *print_array - prints nth number of an array
 *@a: input value
 *@n: length
 *Return: 0
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
_putchar('\n');
}
