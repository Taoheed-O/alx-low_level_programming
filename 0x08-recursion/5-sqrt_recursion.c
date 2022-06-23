#include "main.h"
/**
* _square - returns the square root of a given integer.
* @n: the integer parameter.
* @i: the the iterator.
* Return: the square root of n.
*/
int _square(int n, int i)
{
if (i % (n / i) == 0)
{
if (i * (n / i) == n)
return (i);
else
return (-1);
}
return (0 + _square(n, i + 1));
}
/**
* _sqrt_recursion - returns the square root of a given integer.
* @n: the integer parameter.
* Return: the square root of n.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
return (_square(n, 2));
}
