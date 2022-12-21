#include <stdio.h>
/**
 *main -  Entry point
 *Return: 0
 */
int main(void)
{
int i;
long int f[50], result = 2;

f[0] = 1;
f[1] = 2;
for (i = 2; i < 50; i++)
{
f[i] = f[i - 1] + f[i - 2];
if (f[i] % 2 == 0 && f[i] < 4000000)
result += f[i];
}
printf("%ld\n", result);
return (0);
}
