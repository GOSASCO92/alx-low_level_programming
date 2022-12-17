#include "main.h"
/**
 *_islower - checks if case is lower
 *@c: user input
 *Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
if (a == c)
return (1);
}
return (0);
}
