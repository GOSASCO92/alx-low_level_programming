#incude "main.h"
/**
 *_isalpha - checks if input is alphabet or not
 *@c: user input
 *Return: 1 if true and 0 otherwise
 */
int _isalpha(int c)
{
char u, l;

for (u = 'A'; u <= 'Z'; u++)
{
for (l = 'a'; l <= 'z'; l++)
{
if (u != c || l != c)
return (1);
}
}
return (0);
}
