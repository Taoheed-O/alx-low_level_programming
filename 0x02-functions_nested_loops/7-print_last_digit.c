#include "main.h"
/**
* print_last_digit - prints thr last digit of a number
*
* @num: the variable
*
* Return: the last digit of num
*/
int print_last_digit(int num)
{
int l;
l = num % 10;
if (l >= 0)
{
_putchar(l + 48);
return (l);
}
else
{
_putchar(-l + 48);
return (-l);
}
}
