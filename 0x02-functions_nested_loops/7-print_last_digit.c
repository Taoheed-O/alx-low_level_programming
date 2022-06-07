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
int last;
last = num % 10;
if (last >= 0)
{
_putchar(last);
return (last);
}
else
{
_putchar(-last);
return (-last);
}
}
