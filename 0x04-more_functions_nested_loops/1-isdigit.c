#include "main.h"
/**
 *_isdigit - checks if an input is digit
 *@c: input to be checked
 *Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
int i, result;

result = 0;
for (i = 0; i <= 9; i++)
{
if (i == c)
{
result = 1;
break;
}
}
return (result);
}
