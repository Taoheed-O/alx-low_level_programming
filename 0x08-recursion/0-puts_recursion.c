#include "main.h"
/**
* _puts_recursion - function that prints a string
* @s: the parameter
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
int i;
for (i = 0 ; i >= 0 ; i++)
{
if (s[i] == '\0')
{
break;
}
else
{
_putchar(s[i]);
}
}
_putchar('\n');
}
