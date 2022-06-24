#include "main.h"
/**
* _abs - absolute value of an integer
*
* @num: the variable value..
*
* Return: num if positive and -1*num if negative
*/
int _abs(int num)
{
if (num < 0)
{
return (num * -1);
}
else
{
return (num);
}
}
