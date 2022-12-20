#include "main.h"
/**
 *print_sign - checks the sign of a number
 *n: user input
 *Return: 1, 0, -1 based is check
 */
int print_sign(int n)
{
  if (n > 0)
    {
      _putchar('+');
      return (1);
    }
  else if (n == 0)
    {
      _putchar('0');
      return (0);
    }
  else if (n < 0)
    {
      _putchar("-1");
      return (-1);
    }
  return (0);
}
