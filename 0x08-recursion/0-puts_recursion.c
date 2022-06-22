#include "main.h"
/**
* _puts_recursion - function that prints a string
* @s: the parameter
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
_putchar('\n');
}
if (s[i] != '\0')
{
_putchar(*s);
_puts_recursion((s + 1));
i++;
}
}
