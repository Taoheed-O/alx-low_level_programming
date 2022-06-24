#include "main.h"
/**
* _puts - prints a string
* @s: the string to be printed
* Return: Always 0 (Success)
*/
void _puts(char *s)
{
int i = 0;
while (i >= 0)
{
if (s[i] == '\0')
{
_putchar('\n');
break;
}
_putchar(s[i]);
i++;
}
}
