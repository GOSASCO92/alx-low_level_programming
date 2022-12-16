#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main(void)
{
char i;

for (i = '1'; i < '100'; i++)
{
if (i <= '9')
{
putchar('0');
if (i != '99')
{
putchar(i);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
