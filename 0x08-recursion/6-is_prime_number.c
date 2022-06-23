#include "main.h"
/**
* prime_number - Detects and returns 1 if the parameter is a prime number.
* @n: the integer parameter.
* @i: iterator.
* Return: 1 if its a prime number and 0 if otherwise.
*/
int prime_number(unsigned int n, unsigned int i)
{
if ((n % i) == 0)
{
if (n == i)
{
return (1);
}
else
{
return (0);
}
}
return (0 + prime_number(n, i + 1));
}
/**
* is_prime_number - Returns 1 if the parameter is a prime number.
* @n: the integer parameter.
* Return: 1 if its a prime number and 0 if otherwise.
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime_number(n, 2));
}
