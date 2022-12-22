#include "main.h"
/**
 *_isupper -  checks if the case is upper
 *@c: case to be checked
 *Return: 1 if upper or 0 if not;
 */
int _isupper(int c)
{
char upper;
int result = 0;

for (upper = 'A'; upper <= 'Z'; upper++)
{
if (upper == c)
{
result = 1;
break;
}
}
return (result);
}
