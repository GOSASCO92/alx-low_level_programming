#include "main.h"
/**
 *_islower - checks if case is lower
 *@c: user input
 *Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
char a;
int i;

for (a = 'a'; a <= 'z'; a++)
{
if (a == c)
i = 1;
}
return (i);
}
