#include "main.h"
/**
* print_diagonal - diagonally
* @n: the parameter
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
if (i < (n - 1))
_putchar('\n');
}
_putchar('\n');
}
