#include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long int l;
	long int l2;
	float f;
	int i;
	char c;


	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l2));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
