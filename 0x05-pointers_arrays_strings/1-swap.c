#include "main.h"
/**
 *swap_int - swaps between two integers
 *@a: int 1
 *@b: int 2
 *return: 0
 */
void swap_int(int *a, int *b)
{
int get_a;

get_a = *a;
*a = *b;
*b = get_a;
}
