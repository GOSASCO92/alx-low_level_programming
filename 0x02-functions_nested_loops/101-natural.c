#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main(void)
{
int x, y;

for (x = 1; x < 1024; x++)
{
if (x % 3 == 0 || x % 5 == 0)
y += x;
}
printf("%d", y);
printf("\n");
return (0);
}
