#include "main.h"
/**
* print_square - prints a square
* @size: the sides of the square
* Return: Always 0 (Success)
*/
void print_square(int size)
{
int i;
if (size <= 48)
{
_putchar('\n');
}
i = 1;
while (i <= size)
{
int j;
j = 1;
_putchar('\n');
while (j <= size)
{
_putchar('#');
 j++;
}
i++;
}
}
