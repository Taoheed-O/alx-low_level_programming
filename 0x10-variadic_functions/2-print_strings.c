#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - Function that print strings.
* @separator: The string separator.
* @n: The number of argument passed.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *string;
va_start(ap, n);
for (i = 0 ; i < n ; i++)
{
string = va_arg(ap, char *);
if (string)
{
printf("%s", string);
}
else
{
printf("(nil)");
}
if (separator && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
}
