#include "main.h"
/**
* print_line - prints straight line in the erminal
*
*@n: the number of _ to make the line
*
* Return: Always 0 (Success)
*/
void print_line(int n)
{
int i;
if (n <= 48)
{
}
for (i = 1 ; i <= n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
