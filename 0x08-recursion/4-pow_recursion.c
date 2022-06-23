#include "main.h"
/**
* _pow_recursion - returns the power(exponent) of the integer x.
* @x: the integer.
* @y: the exponent.
* Return: the power of the integer.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
