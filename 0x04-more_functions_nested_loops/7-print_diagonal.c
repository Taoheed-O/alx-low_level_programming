#include "main.h"
/**
* print_diagonal - diagonally
* @n: the parameter
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
int s;
int i;
if (n <= 48)
{
_putchar('\n');
}
for (s = 1 ; s <= n  ; s++)
{
for (i = 1; i < s; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
 _putchar('\n');
}
