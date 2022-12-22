#include "main.h"
/**
 *_isupper -  checks if the case is upper
 *@c: case to be checked
 *Return: 1 if upper or 0 if not;
 */
int _isupper(char c)
{
char upper;
int result;

for (upper = 'A'; upper <= 'Z'; upper++)
{
if (upper == c)
result = 1;
else
result = 0;
}
return (result);
}
