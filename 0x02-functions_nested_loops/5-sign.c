#include "main.h"
/**
* print_sign - Sign of integers
*
* @n: n is the variable integer
*
* Return: 0 if n is 0. 1 if n is + and -1 if n is -
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(48);
return (-1);
}
}
